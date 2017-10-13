#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > nodes;

int visited[100001]= {0};
long double answer[100001] = {0.};
int n;

void dfs(int i)
{


    if(visited[i]) return;

    visited[i] = 1;

    int nbfils=0;
    for(int j=0 ; j < nodes[i].size() ; j++)
     {
        if(!visited[nodes[i][j]])
        {
            dfs(nodes[i][j]);
            nbfils++;
        }

     }

     if(nbfils)
     {
            for(int j=0 ; j < nodes[i].size() ; j++)
             {
                 if(nodes[i][j] != i)
                 {
                    answer[i] += answer[nodes[i][j]];
                 }
             }
             /*if(n == 100000 &&  i == 1) {
                    answer[i] = answer[i]/ (long double) nbfils;
                    answer[i] += 1.;
                    cout << answer[i];
             }*/

             answer[i] = answer[i]/ (long double) nbfils;
             answer[i] += 1.;
     }

    //cout << "i:" << i << " " << answer[i] << endl;
}

int main()
{
    int a,b;


    cin >> n;



    nodes = vector< vector<int> >(n+1);

    for(int i=0 ; i < n-1 ; i++)
    {
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);

    }

    dfs(1);

            cout.precision(17);
            cout << fixed << answer[1];

    return 0;
}
