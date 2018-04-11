    #include <bits/stdc++.h>
    using namespace std;

    const int MAX  = 1e5;
    int tree[4*MAX];
    int A[MAX];

    void build(int node, int start , int end)
    {
        if(start == end )
        {
            if(A[start]&1)
                tree[node] = 1;
            else tree[node] = 0;
            return;
        }

        int mid = (start+end)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        tree[node] = tree[2*node]+tree[2*node+1];
    }

    void update(int node,int start,int end,int i,int v)
    {
        if(start == end)
        {
            A[i] = v;
            if(A[i]&1)
                tree[node] = 1;
            else tree[node] = 0;
            return;
        }

        int mid = (start+end)/2;
        if(i>=start && i<=mid)
            update(2*node,start,mid,i,v);
        else if(i>mid && i <=end)
            update(2*node+1,mid+1,end,i,v);
        tree[node] = tree[2*node]+tree[2*node+1];
    }

    int query(int node,int start,int end,int l,int r)
    {
        if(r<start || l>end)
            return 0;

        if(l<=start && end<=r)
            return tree[node];

        int mid = (start+end)/2;
        int q1 = query(2*node,start,mid,l,r);
        int q2 = query(2*node+1,mid+1,end,l,r);
        return q1+q2;
    }

    int main() {

        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            cin >> A[i];
        }
        build(1,1,n);

        int m; cin >> m;
        while(m--)
        {
            int o; cin >> o;
            if(o==0)
            {
                int i,v; cin >> i >> v;
                update(1,1,n,i,v);
            }
            else if(o==1){
                int l,r; cin >> l >> r;
                cout << abs((r-l+1) - query(1,1,n,l,r)) << endl;
            }
            else{
                int l,r; cin >> l >> r;
                cout << query(1,1,n,l,r) << endl;
            }

        }

        return 0;
    }