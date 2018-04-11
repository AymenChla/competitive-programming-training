#include <bits/stdc++.h>
using namespace std;

const int MAX = pow(2,17);
typedef struct {
    int V;
    bool OR;
} Node;

Node tree[2*MAX];
int A[MAX];

void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node].V = A[start];
        tree[node].OR = 1;
    }
    else{
        int mid = (start+end)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        if(tree[2*node].OR)
        {
            tree[node].V = tree[2*node].V | tree[2*node+1].V;
            tree[node].OR=0;
        }
        else{
            tree[node].V = tree[2*node].V ^ tree[2*node+1].V;
            tree[node].OR=1;
        }

    }

}

void update(int node,int start, int end, int p, int v)
{
    if(start == end)
    {
        A[p] = v;
        tree[node].V = v;
        tree[node].OR = 1;
    }
    else{
        int mid = (start+end)/2;
        if(start<=p && p<=mid)
            update(2*node,start,mid,p,v);
        else if(mid<p && p<=end)
            update(2*node+1,mid+1,end,p,v);

        if(tree[2*node].OR)
        {
            tree[node].V = tree[2*node].V | tree[2*node+1].V;
            tree[node].OR=0;
        }
        else{
            tree[node].V = tree[2*node].V ^ tree[2*node+1].V;
            tree[node].OR=1;
        }
    }
}

int main() {

    int n,m;
    cin >> n >> m;
    n = pow(2,n);
    for(int i=1 ;i <= n; i++)
    {
        cin >> A[i];
    }
    build(1,1,n);


    while(m--)
    {
        int p,v;
        cin >> p >> v;
        update(1,1,n,p,v);
        cout << tree[1].V << endl;
    }

    return 0;
}