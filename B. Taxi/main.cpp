#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0,nb[5]={0};
    while(n--) {
        int i;
        cin >> i;
        nb[i]++;
    }
    ans=nb[4]+nb[3]+(nb[2]/2);
    nb[2] %= 2;
    if(nb[2]>0)
    {
        if(nb[1]>1) nb[1]-=2;
        else if(nb[1]==1) nb[1]--;
    }
    if(nb[3]<nb[1])
        nb[1]-=nb[3];
    else nb[1]=0;

    ans+=(nb[1]/4);
    nb[1] %= 4;
    ans+=(nb[1]/3);
    nb[1] %= 3;
    ans+=(nb[1]/2);
    nb[1] %= 2;
    ans+=nb[2]+nb[1];
    cout << ans << endl;

    return 0;
}