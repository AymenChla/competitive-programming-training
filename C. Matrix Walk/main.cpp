#include <bits/stdc++.h>
using namespace std;

int check(int y,int a, int b)
{
    if(b==a+1 && a%y==0) return 0;
    if(a==b+1 && b%y==0) return 0;
    return 1;
}

int main() {
    int n; cin >> n;
    int a[n];
    int maxe = 0;


    for(int i=0 ; i < n  ; i++) {
        cin >> a[i];
        if (a[i] > maxe) maxe = a[i];
    }

    int dif[n-1];
    int maxd=1;
    for(int i=0 ; i < n -1 ; i++)
    {
        dif[i] = abs(a[i]-a[i+1]);
        if(maxd<dif[i]) maxd=dif[i];

    }

    int x = (int) ceil(maxe/double(maxd));
    int y = maxd;

    for(int i=0 ; i < n - 1 ; i++)
    {
        if(dif[i] == 0 || !(dif[i]==maxd || dif[i]==1))
        {
            cout << "NO" << endl;
            return 0;
        }
        if(y!=1 && !check(y,a[i],a[i+1]))
        {
            cout << "NO" << endl;
            return 0;
        }
    }


    cout << "YES" << endl;
    cout << x << " " << y << endl;
    return 0;
}