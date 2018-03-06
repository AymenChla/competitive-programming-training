#include <bits/stdc++.h>
using namespace std;

long long puissance[101]={0};

void primefactorization(long long n)
{
    while(n%2==0)
    {
        puissance[2]++;
        n = (n>>1);
    }

    for(int i=3 ; i <= sqrt(n) ; i++)
    {
        while(n%i==0)
        {
            puissance[i]++;
            n /= i;
        }
    }

    if(n>2)
    {
        puissance[n]++;
    }
}

long long d(long long n)
{
    primefactorization(n);
    long long d=1;
    for(int i=1 ; i <= 100 ; i++)
    {
        d*=(puissance[i]+1);
    }
    return d;
}

int main() {

    int t[1000001];
    for(int i =1;i<=1000000;i++){
        for(int j=i;j<=(1000000);j=j+i){
            t[j]=t[j]+1;
        }
    }
    for(int i=0 ; i < 100 ; i++) cout << t[i] << endl;

    long long a,b,c;
    cin >> a >> b >> c;

    long long res=0;
    for(int i=1 ; i <= a ; i++)
    {
        for(int j=1 ; j <= b ; j++)
        {
            for(int k=1 ; k <= c ; k++)
            {
                res+=d(i*j*k);
                memset(puissance,0,sizeof(puissance));
            }
        }
    }


    res = res%(long long)2e30;
    cout << res << endl;
    return 0;
}