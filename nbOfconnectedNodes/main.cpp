#include <iostream>
#include <vector>
using namespace std;

int n = 8;
vector< vector<int> > adj(n);
vector<bool> visited(n);




void dfs(int node)
{
    visited[node] = true;
    //for each child
    for(int i=0 ; i < adj[node].size() ; i++)
    {
        if(!visited[adj[node][i]])
        {
            dfs(adj[node][i]);
        }


    }
}

int nbConnected()
{
    int nb = 0;

    for(int i=0 ; i < n ; i++)
    {
        if(!visited[i])
        {
            dfs(i);
            nb++;
        }

    }

    cout << nb;
}

int main()
{


    //push nodes
    adj[0].push_back(2);
    adj[0].push_back(5);
    adj[0].push_back(6);

    adj[1].push_back(5);

    adj[2].push_back(1);

    adj[3].push_back(7);

    adj[4].push_back(5);

    adj[5].push_back(0);
    adj[5].push_back(1);
    adj[5].push_back(4);
    adj[5].push_back(6);

    adj[6].push_back(0);
    adj[6].push_back(5);

    adj[7].push_back(3);



    nbConnected();
    return 0;
}
