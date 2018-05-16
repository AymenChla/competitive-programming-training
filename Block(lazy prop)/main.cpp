#include <bits/stdc++.h>
using  namespace std;

const int MAX  = 1e5+1e4;
int tree[4*MAX];
int lazy[4*MAX];

void build(int node,int s,int e)
{
    if(s==e)
    {
        tree[node] = 0;
        return;
    }

    int m = (e+s)/2;
    build(2*node,s,m);
    build(2*node+1,m+1,e);
    tree[node] = max(tree[2*node],tree[2*node+1]);
}

void update(int node,int start,int end,int l,int r,int v)
{
    if(lazy[node])
    {
        tree[node] = lazy[node];
        if(start!=end)
        {
            lazy[2*node] = lazy[node];
            lazy[2*node+1] = lazy[node];
        }
        lazy[node] = 0;

    }

    if(r<l || r<start || end < l)
        return;

    if(l<=start && end<=r)
    {
        tree[node] = v;
        if(start!=end)
        {
            lazy[2*node] = v;
            lazy[2*node+1] = v;
        }

        return;
    }

    int mid=(start+end)/2;
    update(2*node,start,mid,l,r,v);
    update(2*node+1,mid+1,end,l,r,v);
    tree[node] = max(tree[2*node],tree[2*node+1]);
}

int query(int node,int start,int end,int l,int r)
{
    if(lazy[node])
    {
        tree[node] = lazy[node];
        if(start!=end)
        {
            lazy[2*node] = lazy[node];
            lazy[2*node+1] = lazy[node];
        }
        lazy[node] = 0;

    }

    if(r<l || r<start || end < l)
        return 0;

    if(l<=start && end<=r)
        return tree[node];

    int mid=(start+end)/2;
    int q1 = query(2*node,start,mid,l,r);
    int q2 = query(2*node+1,mid+1,end,l,r);
    return max(q1,q2);
}

int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int n; cin >> n;

    memset(tree,0, sizeof tree);
    memset(lazy,0,sizeof lazy);

    int l,h,p,c,x;
    while(n--)
    {
        cin >> l >> h >> p >> c >> x;

        if(c)
        {
            int v = query(1,1,MAX,x,x+l-1);
            update(1,1,MAX,x,x+l-1,v+1);
            update(1,1,MAX,x+p-1,x+p-1,v+h+1);
        }
        else{
            int v1 = query(1,1,MAX,x,x+p-2);
            int v2 = query(1,1,MAX,x+p,x+l-1);
            int v3 = query(1,1,MAX,x+p-1,x+p-1);

            v1=max(max(v1+1,v2+1),v3+h+1);
            update(1,1,MAX,x,x+l-1,v1);
        }
    }

    cout << query(1,1,MAX,1,MAX) << endl;

    return 0;
}