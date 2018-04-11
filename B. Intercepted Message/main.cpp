#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int dpa[n]={0},dpb[m]= {0};
    int a[n],b[m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        dpa[i]=(i==0 ? 0:dpa[i-1])+a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        dpb[i]=(i==0 ? 0:dpb[i-1])+b[i];
    }

    int i=0,j=0,ta=0,tb=0;
    int ans=0;
    while(i<n && j<m)
    {
        if(dpa[i]==dpb[j])
        {
            ta=dpa[i];
            tb=dpb[j];
            i++;
            j++;
            ans++;
        }
        if((dpa[i]-ta)<(dpb[j]-tb)) i++;
        if((dpa[i]-ta)>(dpb[j]-tb)) j++;
    }

    cout << ans << endl;
    return 0;
}