#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,e,f;
    cin >> e >> f;
    int n;
    cin >> n;
    while(n--)
    {
        a = e;
        b = f;
        int l,u;
        cin >> l >> u;

        int i=2;
        while( (i<=a && i<=b) && !(__gcd(a,b)>=l && __gcd(a,b)<=u))
        {
            if(a%i==0 && b%i==0)
                a/=i,b/=i;
            else
                i++;
        }

        if(!(__gcd(a,b)>=l && __gcd(a,b)<=u)) cout << -1 << endl;
        else if( (i==a || i==b) && i >= l && i <= u) cout << __gcd(a,b) << endl;
        else
        cout << __gcd(a,b) << endl;
    }
    return 0;
}