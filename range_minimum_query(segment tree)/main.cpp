#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
int tree[MAX];
int A[MAX];

void build(int node,int start,int end)
{
    if(start==end)
        tree[node] = A[start];
    else{
        int mid = (start+end)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }

}

void update(int node,int v,int ind,int start, int end)
{
    if(start==end)
    {
        A[ind] = v;
        tree[node] = v;
    }
    else{

        int mid = (start+end)/2;
        if(ind>=start && ind<=mid)
            update(2*node,v,ind,start,mid);
        else if(ind>mid && ind<=end)
            update(2*node+1,v,ind,mid+1,end);
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}


int query(int node,int start, int end, int l ,int r)
{
    if(l<=start && end<=r)
        return tree[node];

    if(r<start || end < l)
        return MAX;

    int mid = (start+end)/2;
    int a = query(2*node,start,mid,l,r);
    int b = query(2*node+1,mid+1,end,l,r);
    return min(a,b);
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int n,q;
    cin >> n >> q;
    for(int i=1 ; i <= n; i++)
    {
        cin >> A[i];
    }

    build(1,1,n);


    while(q--) {
        char o;
        cin >> o;
        if (o == 'q') {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l, r) << endl;
        }
        else {
            int ind, v;
            cin >> ind >> v;
            update(1, v, ind, 1, n);
        }
    }

    return 0;
}