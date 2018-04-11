#include <bits/stdc++.h>
using namespace std;


int main() {

    long long n;

    while(1)
    {

        cin >> n;
        if(!n) break;

        long long a = sqrt(n);
        if(a*a == n)
            cout << "yes" << endl;
        else cout << "no" << endl;

    }
    return 0;
}