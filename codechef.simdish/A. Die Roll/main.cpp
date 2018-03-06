#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int m = max(a,b);
    int x = (6-m+1);
    int y = 6/__gcd(x,6);
    x = x/__gcd(x,6);

    cout << x << "/" << y << endl;
    return 0;
}