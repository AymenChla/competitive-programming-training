#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int v; cin >> v;
        n--;
        while(n--)
        {
            int a;
            cin >> a;
            cout << (v/__gcd(v,a)) << "/" << (a/__gcd(v,a)) << endl;
        }
    }

    return 0;
}