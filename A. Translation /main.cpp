#include <bits/stdc++.h>
using namespace std;


const int MAX = 2001;
const long long mod = 1e9+7;
long long f[MAX];

long long comb(int k,int n)
{
    return (f[n]/((f[n-k]*f[k])%mod))%mod;
}

int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(0);



    int t[MAX];

    for(int i =1;i<MAX;i++) {
        for (int j = i; j < (MAX); j = j + i) {
            t[j] = t[j] + 1;
        }
    }

    f[0] = 1;
    for(int i=1 ; i < MAX ; i++)
        f[i] = (i*f[i-1])%mod;


    long long c[MAX];
    c[0]=0;

    int n,k;
    cin >> n >> k;

    if(k==1){
        cout << n << endl;
        return 0;
    }

    for(int i=1 ; i <=k ; i++)
    {
        c[i] = (c[i-1]+comb(i,k))%mod;
        //cout << c[i] << " ";
    }



    long long ans=0;
    for(int i=1 ; i <=n ; i++)
    {
       //cout << t[i]-1 << ":" <<c[t[i]-1] << endl;
        ans  = (ans+ (c[t[i]-1]%mod))%mod;
    }

    cout << ans << endl;
    return 0;
}