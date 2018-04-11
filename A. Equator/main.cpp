#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int ans=0;
    int m=0;
    for(int i=0 ; i < n ; i++)
    {
        int v; cin >> v;
        a[i] = v;
        m+=v;
    }

    int mid = ceil(m/2.);
    for(int i=0 ; i < n ; i++)
    {

        ans+=a[i];
        if(ans>=mid)
        {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}