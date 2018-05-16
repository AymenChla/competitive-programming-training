#include <bits/stdc++.h>
using namespace std;

const int MAX = 55;
char M[MAX][MAX];

bool dfs(int x,int y,int r,int c,char M[][MAX])
{
    if(M[x][y] == 'W')
        return true;

    if(M[x][y] != '0')
        return false;

    if(x<r)
    {
        dfs(x+1,y,r,c,M);
    }

}

void watherflow(int x,int y,int r,int c,int inst=0)
{
    if(M[x][y] != 'W' && M[x][y] != 'S' && M[x][y] != 'X')
    {

        int time;
        if(M[x][y] != 'w')
        {
            time = M[x][y] - '0';
            if(time!=0)
                M[x][y] = min(inst,time) + '0';
            else M[x][y] = inst + '0';
        }

        if(x+1< r)
            watherflow(x+1,y,r,c,inst++);

        if(x>0)
            watherflow(x-1,y,r,c,inst++);

        if(y+1<c)
            watherflow(x,y+1,r,c,inst++);
        if(y>0)
            watherflow(x,y-1,r,c,inst++);
    }

}

void bfsWatherFlow(int x,int y,int r,int c,int inst=0)
{

}

int main() {

    int t;
    cin >> t;

    while(t--)
    {
        int r,c;
        cin >> r >> c;
        vector<pair<int ,int>> w;

        for(int i=0 ; i < r ; i++)
        {
            for (int j = 0; j < c; ++j) {
                cin >> M[i][j];
                if(M[i][j] == 'w')
                    w.emplace_back(make_pair(i,j));
                if(M[i][j] == '.')
                    M[i][j] = '0';
            }
        }


        for(int i=0 ; i < w.size() ; i++)
        {
            watherflow(w[i].first,w[i].second,r,c,1);
        }

        for(int i=0 ; i < r ; i++)
        {
            for (int j = 0; j < c; ++j) {
                cout <<  M[i][j] << " ";
            }
            cout << endl;
        }

    }

    return 0;
}