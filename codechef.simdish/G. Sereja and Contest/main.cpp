#include <bits/stdc++.h>
using  namespace std;


int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n,k;

    cin >> n >> k;
    vector<long long> v(n+1);
    long long dp[n+1]={0};

    int r=n,l;
    for(int i=1,j=1; i <= n ;i++,j++)
    {
        cin >> v[i];
        if(i==1) l = v[1];
        long long s=k;
        if(j>1){
            dp[j] = dp[j-1] + (j-2)*l;
            s = dp[j] - (j-1)*(r-j)*v[i];
        }
        if(s<k)
        {
            cout << i << endl;
            r--;
            j--;
        }
        else{
            l=v[i];
        }

    }

    return 0;
}