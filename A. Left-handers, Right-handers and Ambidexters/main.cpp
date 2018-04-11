#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r,a;
    cin >>l >>r>>a;

    int ans=0;
    while(r!=0 && l!=0)
    {
        r--; l--;
        ans+=2;
    }
    int dif=min(abs(r-l),a);

    a-=dif;
    ans+= 2*dif;
    ans+=2*(a/2);

    cout << ans << endl;

    return 0;
}