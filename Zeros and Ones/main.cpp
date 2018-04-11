#include <bits/stdc++.h>
using namespace std;


typedef struct {
    int i;
    int v;
} Node;

const int MAX = 1e6;
Node tree[4*MAX+1];
Node A[MAX+1];
int k;

int i_max(Node a, Node b)
{
    if(b.v>=1)
        return b.i;
    return a.i;
}

void build(int node,int start, int end)
{
    if(start==end)
    {
        A[start].v = 1;
        A[start].i = start;
        tree[node] = A[start];
        return;
    }

    int mid = (start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    tree[node].i = i_max(tree[2*node],tree[2*node+1]);
    tree[node].v = tree[2*node].v+tree[2*node+1].v;
}

int query(int node,int start, int end)
{
    if(k==0)
        return -1; //a voir

    if(k>=tree[node].v){
        k-=tree[node].v;
        return tree[node].i;
    }

    int mid = (start+end)/2;
    int a =  query(2*node,start,mid);
    int b =  query(2*node+1,mid+1,end);
    return max(a,b);
}

void update(int node,int start, int end, int p)
{
    if(start==end)
    {
        A[p].v = 0;
        A[p].i = -1;
        tree[node] = A[p];
        return;
    }

    int mid = (start+end)/2;
    if(p>=start && p<=mid)
        update(2*node,start,mid,p);
    else if(p>mid && p<=end)
        update(2*node+1,mid+1,end,p);

    tree[node].v = tree[2*node].v + tree[2*node+1].v;
    tree[node].i = i_max(tree[2*node],tree[2*node+1]);
}

int main() {

    int n; cin >> n;
    build(1,1,n);

    int m; cin >> m;

    while(m--)
    {
        int o; cin >> o;
        if(o)
        {
            cin >> k;
            int ans = query(1,1,n);
            ans = k>0 ? -1 : ans;
            cout << ans << endl;
        }
        else{
            int p;
            cin >> p;
            update(1,1,n,p);
        }
    }


    return 0;
}