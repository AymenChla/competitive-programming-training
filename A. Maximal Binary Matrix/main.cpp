#include <bits/stdc++.h>
using namespace std;

int M[100][100]={0};

int main() {


        int n,k;
        cin >> n >> k;

        if(k>n*n)
        {
            cout << -1 << endl;
            return 0;
        }



        for(int i=0 ; i < n && k>0; i++)
        {
            for(int j=i ; j < n && k>0 ; j++)
            {
                if(k>1)
                {
                    if(i==j)
                    {
                        M[i][i] = 1;
                        k--;
                    }
                    else{
                        M[i][j] = 1;
                        M[j][i] = 1;
                        k-=2;
                    }
                }
                else{
                    if(i==j)
                    {
                        M[i][i] = 1;
                        k--;
                    }
                }
            }
        }

        for(int i=0 ; i < n ; i++)
        {
            for(int j=0 ; j     < n ; j++)
            {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
}