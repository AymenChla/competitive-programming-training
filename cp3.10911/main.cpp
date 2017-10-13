#include <bits/stdc++.h>
using namespace std;

typedef struct {
    double x,y;
} point;

double distancep(point a , point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

int main()
{
    int n;
    point p;

    vector<point> vp;


    cin >> n;

    double dist[2*n][2*n] = {0};

    for(int i=0 ; i < 2*n ;i++)
    {
        cin >> p.x >> p.y;
        vp.push_back(p);
    }

    for(int i=0 ; i < 2*n ; i++)
    {
        for(int j=i+1 ; j < 2*n ; j++)
        {
            dist[i][j] = distancep(vp[i],vp[j]);
        }
    }

    for(int i=0 ;i < 2*n ;i++)
 {


     for(int j=0 ; j < 2*n ; j++)
    {

        cout << dist[i][j] << "\t" ;
    }
    cout << endl;
}
/*
    int mini, minj;

    int mindist[2*n][2];

    double minc, minr;
    minr = dist[0][0];
    for(int i=1 ; i < 2*n ; i++)
    {
        minc = dist[i][0];
        for(int j=1 ; j < 2*n ; j++)
        {
            if(dist[i][j] < minc)
                minc = dist[i][j];
        }

        if(minc < minr)
            minr = minc;
    }*/
    return 0;
}
