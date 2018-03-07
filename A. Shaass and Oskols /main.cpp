#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n+2];

    for(int i=1 ; i <= n ; i++)
    {
        cin >> a[i];
    }

    int m; cin >> m;
    while (m--)
    {
        int i,j;
        cin >> j >> i;
        a[j-1] += i-1;
        a[j+1] += a[j]-i;
        a[j] = 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}