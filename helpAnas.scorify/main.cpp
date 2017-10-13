#include <iostream>
#include <cstring>
using namespace std;

int MAX(int a , int b )
{
    return (a>b ? a : b);
}

int MIN(int a , int b)
{
    return (a < b ? a : b);

}
int main() {


    int n,r,v,casei=0;
    char R1,R2,src,dest;


    cin >> n >> r;

    while(n != 0 && r != 0)
    {
        int speed[n][n];
        memset(speed, -1, sizeof(speed[0][0]) * n * n);
        /*for(int i=0 ; i < n ; i++)
            for(int j=0 ; j < n ; j++)
                if(i==j) speed[i][j] = 0;
                else speed[i][j] = -1;*/

        for(int i=0 ; i < r ; i++)
        {
            cin >> R1 >> R2 >> v;
            speed[R1-'A'][R2-'A'] = v;

        }


        int k,i,j;
        for ( k=0; k<n; k++)
        {
            for ( i=0; i<n; i++)
            {
                for ( j=0; j<n; j++){
                    speed[i][j] = MAX(speed[i][j],MIN(speed[i][k],speed[k][j]));

                }
            }
        }



       /* for(int i=0 ; i < n ; i++)
        {

            for(int j=0 ; j <  n ; j++)
            {
                cout << speed[i][j] << '\t';
            }
            cout << endl;
        } cout << endl;*/

        cin >> src >> dest;

        cout << "Case " << ++casei << endl;
        cout << speed[MIN(src,dest) - 'A' ][MAX(src,dest) - 'A'] << " Mbits/s"<< endl;
        cin >> n >> r;
    }


    return 0;
}
