#include <bits/stdc++.h>
using namespace std;


int main() {

    string s1,s2; cin >> s1 >> s2;
    cout.precision(12);
    cout << fixed;

    long long fact[11];
    fact[0] = 1;
    for(int i=1 ; i <= 10 ; i++)
    {
        fact[i] = i*fact[i-1];
    }

    int n1=0,n2=0,p1=0,m1=0,p2=0,m2=0,u=0;
    for(int i=0 ; i < s1.length() ; i++)
        if(s1[i] == '+') n1++,p1++;
        else n1--,m1++;

    for(int i=0 ; i < s2.length() ; i++)
        if(s2[i] == '+') n2++,p2++;
        else if(s2[i] == '-') n2--,m2++;
        else{
            u++;
        }

    double ans = 1;

    if(u==0) {
        if (n1 == n2)
            cout << ans << endl;
        else {
            ans = 0;
            cout << ans << endl;
        }
    }
    else{
        if(p1 > p2 + u || m1 > m2 + u)
        {
            ans = 0;
            cout << ans << endl;
        }
        else{
            long long comb = fact[u]/(fact[u-(p1-p2)]*fact[p1-p2]);
            ans = comb/pow(2,u);
            cout << ans << endl;
        }
    }

    return 0;
}