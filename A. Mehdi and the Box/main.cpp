#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    long long n,w,h,v;
    while(t--)
    {
        cin >> n >> w >> h;

        while(n--)
        {
            cin >> v;
            if(v<=sqrt(h*h+w*w))
                cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}