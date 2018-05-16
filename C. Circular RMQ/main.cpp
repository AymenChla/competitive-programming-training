#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const int MAX = 200000;
ll tree[4*MAX];
ll lazy[4*MAX];
ll A[MAX+1];

void build(int node,int start , int end)
{
    if(start==end)
    {
        tree[node] = A[start];
        return;
    }

    int mid= (start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    tree[node] = min(tree[2*node],tree[2*node+1]);
}

void update(int node,int start,int end,int l,int r,int v)
{
    if(lazy[node])
    {
        tree[node] += lazy[node];
        if(start!=end)
        {
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        lazy[node]=0;
    }

    if(r < l || r < start || end < l)
        return;

    if(l<=start && end <=r)
    {
        tree[node] += v;
        if(start!=end)
        {
            lazy[2*node] += v;
            lazy[2*node+1] += v;
        }
        else{
            A[start] += v;
        }
        return ;
    }

    int mid=(start+end)/2;
    update(2*node,start,mid,l,r,v);
    update(2*node+1,mid+1,end,l,r,v);
    tree[node] = min(tree[2*node],tree[2*node+1]);
}


ll query(int node,int start,int end,int l,int r)
{
    if(lazy[node])
    {
        tree[node] += lazy[node];
        if(start!=end)
        {
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        lazy[node]=0;
    }

    if(r < l || r < start || end < l)
        return inf;

    if(l<=start && end <=r)
        return tree[node];

    int mid = (start+end)/2;
    ll q1 = query(2*node,start,mid,l,r);
    ll q2 = query(2*node+1,mid+1,end,l,r);
    return min(q1,q2);
}

int main() {

    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;

    cin >> n;
    for(int i=1 ; i <=n ; i++)
    {
        cin >> A[i];
    }

    build(1,1,n);
    memset(lazy,0,sizeof lazy);

    int m;
    cin >> m;

    cin.ignore();
    int l,r,v;
    while(m--)
    {

        string s; getline(cin,s);
        stringstream ss(s);
        ss >> l >> r;
        l++;r++;

        if(ss>>v)
        {

            if(l<=r)
                update(1,1,n,l,r,v);
            else{
                update(1,1,n,l,n,v);
                update(1,1,n,1,r,v);
            }
        }
        else{

            if(l<=r)
               cout << query(1,1,n,l,r) << endl;
            else{
                ll q1 =  query(1,1,n,l,n);
                ll q2 =  query(1,1,n,1,r);
                cout << min(q1,q2) << endl;
            }

        }
    }

    return 0;
}