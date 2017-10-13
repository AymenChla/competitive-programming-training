#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > nodes;
vector< vector<int> >  ssg;

void insert_sorted( vector<int> &cont, int value ) {
    vector<int>::iterator it = std::lower_bound( cont.begin(), cont.end(), value, std::greater<int>() );
    cont.insert( it, value );
}


void dfs(int i,int* visited,int t)
{
    if(!visited[i])
    {
        visited[i] = 1;
        insert_sorted(ssg[t],i);

        for(int j=0 ; j < nodes[i].size() ;j++)
        {

            dfs(nodes[i][j],visited,t);
        }
    }
}


int main()
{

    int n;
    int nbN,m;
    cin >> n;

    while(n--)
    {

        cin >> nbN >> m;
        int visited[nbN +1];
        memset(visited,0,sizeof(visited));

        nodes = vector< vector<int> >(nbN+1);
        ssg = vector< vector<int> >(0);

        int a,b;
        for(int i=0 ; i < m ; i++)
        {
            cin >> a >> b;
            nodes[a].push_back(b);
            nodes[b].push_back(a);
        }



        for(int i=1 ;  i <= nbN ; i++)
        {
            if(!visited[i])
            {
                vector<int> a;
                ssg.push_back(a);
                int t = ssg.size()-1;
                dfs(i,visited,t);
            }
        }


        cout << ssg.size() << " : ";
        for(int i=0 ; i < ssg.size() ;i++)
        {
            cout << "[";
            for(int j=ssg[i].size()-1 ; j >=0 ; j--)
            {
                if(j==0)
                    cout << ssg[i][j];
                else cout << ssg[i][j] << ",";
            }

            cout << "]";
        }
        cout << endl;
    }



    return 0;
}
