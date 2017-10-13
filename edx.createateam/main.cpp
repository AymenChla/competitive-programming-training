#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("input.txt");
ofstream cout("output.txt");


int main()
{

    int n[3][3];

    for(int i=0 ; i < 3 ; i++)
    {
        for(int j=0 ; j < 3 ;j++)
        {
            cin >> n[i][j];
        }
    }

    long double maxe =0.;
    for(int i=0 ; i < 3 ; i++)
    {
        for(int j=0 ; j < 3 ; j++)
        {
            for(int k=0 ; k < 3 ; k++)
            {
                if(i != j && j !=k && i != k)
                {
                       //cout << i << ":" << j << ":" << k << " " << n[0][i] << "+" << n[1][j] << "+" << n[2][k] << " ";
                    long double  curr = (long double)sqrt((long double) (n[0][i]*n[0][i] + n[1][j]*n[1][j] + n[2][k]*n[2][k]));
                    if(curr > maxe)
                        {

                            maxe = curr;
                        }
                        //cout << maxe << endl;
                }

            }
        }

    }

    cout.precision(17);
    cout << fixed << maxe;

    return 0;
}
