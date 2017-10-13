#include <iostream>
#include <stdio.h>
using namespace std;

long long gcd(long long a, long long b)
{

    while(a!=b)
    {
        //cout << "s";
        if(b>a){
            b = b-a;
        }
        else a = a-b;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    long long str=0,sumStr,pgcd,totalStr=0,localStr=0;
    cin >> sumStr;
    totalStr = localStr = sumStr;
    for(int i=2 ; i <= n ; i++)
    {
        cin >> str;

        pgcd  = gcd(sumStr,str);
        if(pgcd>1){
            sumStr+=str;
            localStr = pgcd*i;
            totalStr += localStr;
        }
        else{
            sumStr = str;
            totalStr += localStr = str*i;
        }

    }

    cout << totalStr%1000000007 << endl;

    return 0;
}
