#include <bits/stdc++.h>
using namespace std;



int main() {
    int n,m;
    cin >> n >> m;
    int a[n];

    for(int i=0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0,v; i < m; ++i) {
        cin >> v;
        cout << (upper_bound(a,a+n,v) - a) << " ";
    }
    return 0;
}