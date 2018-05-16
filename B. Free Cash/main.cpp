#include <bits/stdc++.h>
using namespace std;

int dif(int h,int lh,int m,int lm)
{
    if(h==lh && m==lm) return true;
    return false;
}

int main() {
    int n; cin >> n;
    int ans=1;
    int lh,lm; cin >> lh >> lm;
    n--;
    int suc=1;
    while(n--)
    {
        int h,m; cin >> h >> m;


        if(dif(h,lh,m,lm)){
            suc++;
            if (suc>ans) ans=suc;
        }
        else{
            suc=1;
        }



        lm = m;
        lh = h;
    }

    cout << ans << endl;
    return 0;
}