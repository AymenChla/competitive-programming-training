#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mind = n;
    int x=1,y=1;
    for(int i=1 ; i <= n/2 ; i++)
    {
        if(i < n-i && __gcd(i,n-i)==1)
        {
            x = i;
            y = n-i;
        }
    }

    cout << x << " " << y << endl;
    return 0;
}
