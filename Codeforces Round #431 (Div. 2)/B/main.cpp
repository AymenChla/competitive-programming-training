#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    long long a[n];
    for(int i=0 ; i < n ; i++)
        cin >> a[i];

    int i=0;

    if(n==3){
        if(a[2] - a[1] == a[1] - a[0])
            cout << "no" << endl;
        else
            cout << "YES" << endl;

        return 0;
    }

    for(int i=1 ; i < n ; i++)
    {
        int visited[n+1] = {0};
        long long deltaA = a[i] - a[0],deltaB = i+1  - i;
        long double m = ((long double)deltaA)/deltaB;
        for(int j=1 ; j < n ;  j++)
        {
            long long deltaA1 = a[j] - a[0],deltaB1 = j+1  - 1;
            long double m1 = ((long double) deltaA1 )/deltaB1;
            if(m == m1) visited[j+1] = 1;
        }

        int k;
        for(k=1 ; k < n && !visited[k+1]; k++);
        int l=k;
        for( ; k < n && !visited[k+1] ;k++);
        if(l>=n && k >=n)
        {
            cout << "no" << endl;
            return 0;
        }
        else if(l<n && k >=n){
            cout << "yes" << endl;
            return 0;
        }
        deltaA = a[l] - a[k],deltaB = l - k;
        m = ((long double) deltaA )/deltaB;
        int r;
        for(r=l+1 ; r < n ; r++)
        {
            long long deltaA1 = a[r] - a[k],deltaB1 = r  - k;
            long double m1 = ((long double) deltaA1 )/deltaB1;
            if(m == m1) visited[r+1] = 1;
        }

        for(k=1 ; k<=n && visited[k] ; k++);
        if(k>n){
            cout << "yes" << endl;
            return 0;
        }

    }

    cout << "no" << endl;

    return 0;
}
