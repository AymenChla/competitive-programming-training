#include <bits/stdc++.h>
using namespace std;

const int MAX  = 1e5;

int tree[4*MAX];
int A[MAX];
typedef struct {
    int i;
    int v;
}Node;

Node seg[4*MAX];

Node n_min(Node &a,Node &b)
{
    return a.v<=b.v ? a:b;
}

void b(int node, int start , int end)
{
    if(start==end)
    {
        seg[node].i = start;
        seg[node].v = A[start];
        return;
    }

    int mid = (start+end)/2;
    b(2*node,start,mid);
    b(2*node+1,mid+1,end);
    seg[node] = n_min(seg[2*node],seg[2*node+1]);
}

void u(int node, int start, int end, int ind)
{
    if(start == end)
    {
        seg[node].v = MAX;
        return;
    }

    int mid = (start+end)/2;
    if(ind>=start && ind<=mid)
        u(2*node,start,mid,ind);
    else if(ind>mid && ind<=end)
        u(2*node+1,mid+1,end,ind);
    seg[node] = n_min(seg[2*node],seg[2*node+1]);
}

void build(int node, int start , int end)
{
    if(start==end)
    {
        tree[node] = 1;
        return;
    }

    int mid = (start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    tree[node] = tree[2*node]+tree[2*node+1];
}

void update(int node, int start, int end, int ind)
{
    if(start == end)
    {
        A[ind] =  0;
        tree[node] = A[ind];
        return;
    }

    int mid = (start+end)/2;
    if(ind>=start && ind<=mid)
        update(2*node,start,mid,ind);
    else if(ind>mid && ind<=end)
        update(2*node+1,mid+1,end,ind);
    tree[node] = tree[2*node]+tree[2*node+1];
}


int query(int node,int start,int end,int l,int r)
{
    if(r<start || end < l)
        return 0;

    if(l<=start && end<=r)
        return tree[node];

    int mid = (start+end)/2;
    int q1 = query(2*node,start,mid,l,r);
    int q2 = query(2*node+1,mid+1,end,l,r);
    return q1+q2;
}

int main() {
    int n; cin >> n;
    for(int i=1 ; i <= n; i++)
    {
        cin >> A[i];
    }
    build(1,1,n);
    b(1,1,n);

    int last=1;
    pair<int,int> p;
    int ans=0;
    while(seg[1].v!=MAX)
    {
        int p = seg[1].i;
        cout << seg[1].v << " " << seg[1].i;
        if(last<=p)
        {
            ans += query(1,1,n,last,p);
            cout << " " << query(1,1,n,last,p) << endl;
        }
        else{
            ans += query(1,1,n,last,n);
            ans += query(1,1,n,0,p);
            cout << " " << query(1,1,n,last,n)+query(1,1,n,0,p) << endl;
        }

        last = p;
        update(1,1,n,last);
        u(1,1,n,last);
        for(int i=1 ; i <= n ; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl << ans << endl;
    }

    cout << ans << endl;
    return 0;
}