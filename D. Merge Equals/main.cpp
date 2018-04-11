#include <bits/stdc++.h>
using namespace std;

const int MAX = 150000;
typedef struct {
    int m;
    int occ;
    int i1;
    int i2;
} Node;

Node tree[4*MAX];
long long A[MAX];

Node _min(Node &a,Node &b)
{
    if(a.occ == 2 && b.occ==1) return a;
    if(a.occ == 1 && b.occ==2) return b;
    return (a.m < b.m) ? a:b;
}

void build(int node,int start,int end)
{
    if(start==end)
    {
        tree[node].m = A[start];
        tree[node].occ = 1;
        tree[node].i1 = tree[node].i2 = start;

        return;
    }

    int mid=(start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);

    if(tree[2*node].m != tree[2*node+1].m)
    {
        tree[node] = _min(tree[2*node],tree[2*node+1]);
    }
    else{

        tree[node].m = tree[2*node].m;
        tree[node].occ = tree[2*node].occ + tree[2*node+1].occ;
        tree[node].i1 = tree[2*node].i1;
        tree[node].i2 = tree[2*node+1].i2;

    }

}

void update(int node,int start,int end,int i,int v)
{
    if(start == end)
    {
        A[i] = v;
        tree[node].m =  A[i];
        return ;
    }

    int mid = (start+end)/2;
    if(i>=start && i<=mid)
        update(2*node,start,mid,i,v);
    else if(i>mid && i<=end)
        update(2*node+1,mid+1,end,i,v);

    if(tree[2*node].m != tree[2*node+1].m)
    {
        tree[node] = _min(tree[2*node],tree[2*node+1]);
    }
    else{

        tree[node].m = tree[2*node].m;
        tree[node].occ = tree[2*node].occ + tree[2*node+1].occ;
        tree[node].i1 = tree[2*node].i1;
        tree[node].i2 = tree[2*node+1].i2;

    }
}

Node query(int node,int start,int end)
{

    if(start == end)
        return tree[node];

    if(tree[node].occ==2)
        return tree[node];

    int mid = (start+end)/2;
    Node q1 = query(2*node,start,mid);
    Node q2 = query(2*node+1,mid+1,end);

    if(q1.m != q2.m)
        return _min(q1,q2);
    else{
        if(q1.occ==2)
            return q1;
        Node q = q1;
        q.occ++;
        q.i2 = q2.i1;
        return q;
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=1; i <=n; i++)
    {
        cin >> A[i];
    }
    build(1,1,n);

    Node s = query(1,1,n);
    while(s.i1 != s.i2)
    {

        update(1,1,n,s.i1,MAX);
        update(1,1,n,s.i2,2*s.m);

        cout << s.m << " " << s.occ << " " << s.i1 << " "<< s.i2 << endl;
        for(int i=1; i<=n;i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
        s = query(1,1,n);
    }

    cout << tree[1].m << " " <<  tree[1].occ << " " << tree[1].i1 << " " << tree[1].i2 << endl;
    for(int i=1; i<=n;i++)
    {
        if(A[i]!=MAX) cout << A[i] << " ";
    }
    cout << endl;
}