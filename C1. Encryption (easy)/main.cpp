#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,p; cin >> n >> p;
    long long A[n];

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        if(i)
        A[i]+=A[i-1];
    }

    long long max = 0;
    for(int i=0 ; i < n-1 ; i++)
    {
        if( (A[n-1] - A[i])%p + (A[i]%p) > max)
            max = (A[n-1] - A[i])%p + (A[i]%p);
    }

    cout << max << endl;
    return 0;
}