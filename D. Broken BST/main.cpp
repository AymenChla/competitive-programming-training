#include <bits/stdc++.h>
using namespace std;


typedef struct TreeNode{
    int l;
    int r;
    int v;
} TreeNode;

long long find(int s,vector<TreeNode> v)
{
    if(v[s].l != -1)
    {
        if(v[v[s].l].v > v[s].v)
            return 1+find(v[s].l , v);
        else return find(v[s].l , v);
    }

    if(v[s].r != -1)
    {
        if(v[v[s].r].v < v[s].v)
            return 1+find(v[s].r , v);
        else return find(v[s].r , v);
    }

    if(v[s].l ==-1)
        return 0;

    if(v[s].r == -1)
        return 0;


}

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    vector<TreeNode> v(n+1);


    for (int i = 1,a,b,c; i <= n; ++i) {
        cin >> a >> b >> c;
        TreeNode t;
        t.v = a;
        t.l = b;
        t.r = c;

        v[i] = t;
    }

    sum = find(1,v);
    cout << sum << endl;
    return 0;
}