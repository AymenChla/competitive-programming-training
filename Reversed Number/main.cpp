#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int nbd = (log10(n)+1);
    int l=nbd;
    for(int i=1 ; i <=nbd/2 ; i++)
    {
        int r=pow(10,l-1);

        if(n/r < n%10 )
        {
            cout << 1 << endl;
            return 0;
        }
        n=n%r;
        n=n/10;
        l = (log10(n)+1);
    }

    cout << 0 << endl;
    return 0;
}