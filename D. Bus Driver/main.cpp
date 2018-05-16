#include <bits/stdc++.h>
using  namespace std;


const int MAX = 30000;

pair<long long,pair<int,int>> edges[MAX];
int p[MAX];

void init(int n)
{
    for(int i=0 ; i < n ; i++)
    {
        p[i] = i;
    }
}

int root(int u)
{
    while(p[u]!=u)
    {
        p[u] = p[p[u]];
        u = p[u];
    }

    return u;
}

void union1(int u,int v)
{
    int ru = root(u);
    int rv = root(v);
    p[ru] = p[rv];
}

long long MST(int n,int m)
{
    long long mincost = 0;
    for(int i=0 ; i < m ; i++)
    {
        int u = edges[i].second.first;
        int v = edges[i].second.second;
        long long cost = edges[i].first;

        if(root(u) != root(v))
        {
            mincost += cost;
            union1(u,v);
        }
    }

    return mincost;
}

int main() {

    int n, m, g;

    cin >> n >> m >> g;
    while (n != -1) {

        init(n);
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            edges[i] = make_pair(w, make_pair(u, v));

        }

        sort(edges, edges + m);


        long long mincost = MST(n, m);

        if (m < n - 1) cout << "NULL" << endl;
        else if (g >= mincost) cout << "POSSIBLE" << endl;
        else cout << "IMPOSSIBLE" << endl;

        cin >> n >> m >> g;
    }
    return 0;
}
