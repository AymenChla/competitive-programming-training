#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> nodes;
bool trouve = true;

char dfs(int r,int a,int b,int *visited)
{
    if(visited[r]) return 0;
    visited[r] = 1;

    //if(a==b) return '1';
    for(int i=0 ; i < nodes[r].size() ;i++)
    {
        if(nodes[r][i] == a) trouve = true;
        else if(nodes[r][i] == b && ! trouve) return '0';
        else if(nodes[r][i] == b) return '1';
        dfs(nodes[a][i],a,b,visited);
    }
    return '0';
}

int main()
{

    int n; cin >> n;

    while(n--)
    {
        int nbnodes,a,b;
        cin >> nbnodes;
        int visited[nbnodes+1] = {0};

        nodes = vector<vector<int>>(nbnodes+1);
        for(int i=0 ; i < nbnodes-1 ; i++)
        {
           cin >> a >> b;
           nodes[a].push_back(b);
           nodes[b].push_back(a);

        }

        int m;
        cin >> m;
        for(int i=0 ; i < m ; i++)
        {

            cin >> a >> b;
            trouve = false;
            cout << dfs(1,a,b,visited);
        }
        cout << endl;

    }


    return 0;
}
