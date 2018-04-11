#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e9;
int main() {

    int n;
    cin >> n;
    int a[n];
    int min=MAX;
    int max=0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max = a[i];
    }

    int ans=0;
    for(int i=0 ; i <n ; i++)
    {
        if(a[i]>min && a[i]<max)
            ans++;
    }

    cout << ans << endl;
    return 0;
}