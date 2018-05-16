#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    char A[n][n];
    char B[n][n];
    int M[n][n];

    for(int i=0 ; i < n; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            cin >> A[i][j];

        }
    }
    for(int i=0 ; i < n; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            cin >> B[i][j];
            if(B[i][j] == 'X')
                M[i][j] = 1;
            else M[i][j] = 0;
        }
    }

    for(int i=0 ; i < n ; i++)
    {
        for(int j=0 ; j < n; j++)
        {
            if(A[i][j] == 'O') continue;

            for(int i=0 ; i < n; i++)
            {
                for (int j = 0; j < n; ++j) {
                    cout << M[i][j] << " ";

                }
                cout << endl;
            }
            cout << endl;
            if(A[i][j] == B[i][n-1-j] && M[i][n-1-j]<2)
            {
                M[i][n-1-j]++;
                continue;
            }

            if(A[i][j] == B[n-1-i][j] && M[n-1-i][j]<2)
            {
                M[n-1-i][j]++;
                continue;
            }

            if(A[i][j] == B[n-1-i][n-1-j] && M[n-1-i][n-1-j]<2)
            {
                M[n-1-i][n-1-j]++;
                continue;
            }

            if(A[i][j] == B[i][j] && M[i][j]<2)
            {
                M[i][j]++;
                continue;
            }

            if(A[i][j] == B[j][i] && M[j][i]<2)
            {
                M[j][i]++;
                continue;
            }

            if(A[i][j] == B[n-1-j][i] && M[n-1-j][i]<2)
            {
                M[n-1-j][i]++;
                continue;
            }

            if(A[i][j] == B[n-1-j][n-1-i] && M[n-1-j][n-1-i]<2)
            {
                M[n-1-j][n-1-i]++;
                continue;
            }

            if(A[i][j] == B[j][n-1-i] && M[j][n-1-i]<2)
            {
                M[j][n-1-i]++;
                continue;
            }
        }
    }

    for(int i=0 ; i < n; i++)
    {
        for (int j = 0; j < n; ++j) {
            cout << M[i][j] << " ";

        }
        cout << endl;
    }

    cout << "yes" << endl;
    return 0;
}