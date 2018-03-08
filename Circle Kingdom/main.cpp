#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n];
    int dp[n]={0};
    int ep[n] = {0};

    for(int i=0 ; i < n ; i++)
    {
        cin >> a[i];
        if(i>0)
        dp[i] = a[i-1]+dp[i-1];
    }

    for(int i=0 ; i < n ; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            if(i<j)
            {
                int d = min(dp[j]-dp[i], dp[i]+a[n-1]+(dp[n-1]-dp[j]));
                if(d>ep[i]) ep[i] = d;
            }
            else if(i>j)
            {
                int d = min(dp[i]-dp[j], dp[j]+a[n-1]+(dp[n-1]-dp[i]));
                if(d>ep[i]) ep[i] = d;
            }
        }
    }

    int min=0,minv=ep[0];
    for(int i=1 ; i < n ; i++)
    {
        if(ep[i]<minv){
            minv=ep[i];
            min=i;
        }
    }
    cout << min+1 << endl;
    return 0;
}