#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
unsigned long long f[200005];


unsigned long long modInv(unsigned long long x)
{
    int y=mod-2;
    unsigned long long ret=1;
    while(y)
    {
        if(y&1)
            ret=(ret*x)%mod;
        x=(x*x)%mod;
        y>>=1;
    }
    return ret;
}

unsigned long long comb(int m,int n)
{
    if(n<m)return 0;
    unsigned long long t1=modInv(f[n-m]);
    unsigned long long t2=modInv(f[m]);
    t1=(t1*t2)%mod;
    return (f[n]*t1)%mod;
}

int main() {
    f[0]=1;
    for(int i=1;i<=200000;i++)
        f[i]=(f[i-1]*i)%mod;

    string s;
    cin >> s;

    int n=s.length();
    int l[n],r[n];
    unsigned long long res=0;

    l[0]=(s[0]=='(' ?1:0);
    for(int i=1 ; i < n ; i++)
        l[i]=l[i-1]+(s[i]=='('?1:0);

    r[n-1]=(s[n-1]==')' ?1:0);
    for(int i=n-2 ; i >=0 ; i--)
        r[i]=r[i+1]+(s[i]==')'?1:0);



    for(int i=0 ; i < n ; i++)
    {
        if(s[i]=='(')
        {

            res += comb(l[i],l[i]+r[i]-1)%mod;
            res = res%mod;

        }

    }

    cout << res << endl;
    return 0;
}