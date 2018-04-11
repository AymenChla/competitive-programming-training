#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
typedef struct {
    int nb;
    int m;
} Node;

Node tree[4*MAX];
int lazy[4*MAX];
int A[MAX];

void build(int node,int start,int end)
{
    if(start==end)
    {
        tree[node].m = A[start];
        tree[node].nb = 1;
        return;
    }

    int mid = (start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    tree[node].m = min(tree[2*node].m,tree[2*node+1].m);
    tree[node].nb = tree[2*node].nb+tree[2*node+1].nb;
}

void update(int node,int start, int end, int l,int r)
{

    if(lazy[node])
    {
        tree[node].m += lazy[node];
        if(start!=end)
        {
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        lazy[node]=0;
    }

    if(r<start || end <l)
        return;

    if(l<=start && end<=r)
    {
        tree[node].m++;
        if(start != end)
        {
            lazy[2*node] ++;
            lazy[2*node+1] ++;
        }

        return;
    }

    int mid = (start+end)/2;
    update(2*node,start,mid,l,r);
    update(2*node+1,mid+1,end,l,r);
    tree[node].m = min(tree[2*node].m,tree[2*node+1].m);
    tree[node].nb = tree[2*node].nb+tree[2*node+1].nb;
}

int query(int node,int start,int end,int x)
{
    if(lazy[node])
    {
        tree[node].m += lazy[node];
        if(start!=end)
        {
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        lazy[node]=0;
    }


    if(x<=tree[node].m)
        return tree[node].nb;

    if(start==end)
        return 0;

    int mid = (start+end)/2;
    int q1 = query(2*node,start,mid,x);
    int q2 = query(2*node+1,mid+1,end,x);
    return q1+q2;
}

int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cin.tie(0);
    int n;
    cin >> n;
    memset(A,0,sizeof A);
    memset(lazy,0,sizeof A);

    build(1,1,n);


    int m; cin >> m;
    while(m--)
    {
        int l,r;
        cin >> l >> r;
        update(1,1,n,l,r);
    }
    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        cout << query(1,1,n,x) << endl;
    }

    return 0;
}