#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;

    long long ans=0;
    for(int i=1 ; i <= n ; i++)
    {
        int y = i+b-c;
        int z=i+a-d;
        int v=i+a+b-c-d;
        if(y>=1 && y<=n && z>=1 && z<=n && v>=1 && v<=n)
            ans++;
    }
    cout << ans*(n) << endl;
    return 0;
}