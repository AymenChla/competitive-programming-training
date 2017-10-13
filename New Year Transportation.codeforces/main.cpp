#include <iostream>
#include <vector>
using namespace std;


vector<int> cells;

void dfs(int node, bool *visited , int n)
{
    if(!visited[node])
    {
        visited[node]= true;

        if(node < n-1)
         dfs(cells[node],visited,n);
    }
}

int main()
{
    int t,n;

    cin >> n >> t;
    bool visited[n] = {0};

    cells  = vector<int>(n-1);

    for(int i=0 ; i < n-1 ; i++)
    {
        int p;
        cin >> p;
        cells[i] = p + i;

    }

    dfs(0,visited,n);
    if(visited[t-1])
        cout << "YES";
    else cout << "NO";

    return 0;
}
