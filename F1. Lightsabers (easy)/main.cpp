#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    int A[n],k[m+1],c=0;

    for(int i=0 ; i < n; i++)
        cin >> A[i];

    for(int i=1 ; i <= m ; i++)
    {
        cin >> k[i];
    }

    for(int i=1; i <= m ; i++)
    {
        for (int j = 0; j < n; ++j) {
            c=0;
            while(A[j] == i)
                c++,j++;

            if(c>=k[i])
            {
                k[i]=0;
                break;
            }
        }

        if(k[i])
        {
            cout << i << endl;
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}