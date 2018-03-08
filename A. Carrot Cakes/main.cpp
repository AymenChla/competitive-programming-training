#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t,k,d;
    cin >> n >> t >> k >> d;
    int j=(n+k-1)/k;

    if((d+t)<j*t) cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}