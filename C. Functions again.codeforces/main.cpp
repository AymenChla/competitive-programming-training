#include <iostream>
#include <cmath>
using namespace std;

int sum(int l,int r,int a[])
{
        int sum = 0, p;
        for(int i=l ; i <= r-1 ; i++)
        {
            if((i-l)%2==0) p = 1; else p = -1;
            sum +=abs(a[i] - a[i+1])*p;
        }

        return sum;
}

int main()
{
    int n;
    cin >> n;
    int a[n+1];

    for(int i=1 ; i <= n  ; i++) cin >> a[i];

    int fmax=0,f=0;
    for(int r=1 ; r<=n ; r++)
    {
        for(int l=1 ; l <r ; l++)
        {
            f = sum(l,r,a);
            if(f > fmax) fmax = f;
        }
    }

    cout << fmax << endl;

    return 0;
}
