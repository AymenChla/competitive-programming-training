#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int w=0,b=0;
    long long ans=0;
    for(int i=0 ; i < n ; i++)
    {

        w=b=0;
        for(int j=0 ; j < m ; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1) b++;
        }
        w = m-b;
        if(b!=0)
        {
            ans += pow(2,b)-1;


        }
        if(w!=0)
        {
            ans += pow(2,w)-1;


        }


    }

    for(int i=0 ; i < m ; i++)
    {
        w=b=0;
        for(int j=0 ; j <n ; j++)
        {
            if(a[j][i] == 1) b++;

        }

        w = n-b;
        if(b!=0){
        ans += pow(2,b)-1 - b;

        }

        if(w!=0)
        {
        ans += pow(2,w)-1 - w;

        }

    }



    cout << ans << endl;
    return 0;
}
