#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;


    while(n--)
    {
        long double a,b,c;

        cin >> a >> b;



        if(a == b) cout << 0 << endl;
        else{

            if(a > b ) {
                long long as = ceil(a);
                long long bs = floor(b);
                cout << as-bs- 1 << endl;
            }
            else{
              long long bs = ceil(b);
              long long as = floor(a);
              cout << bs-as-1 << endl;
            }

        }

    }

    return 0;
}
