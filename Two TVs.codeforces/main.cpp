#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n;
    cin >> n;
    pair<int,int> a[n+1];
    int l,r;
    for(int i=1 ; i <= n ; i++)
    {
        cin >> l >> r;
        a[i] = make_pair(l,r);
    }

    sort(a+1,a+n+1);

    int i=-1 ,j=-1;
    for(int k=1 ; k <= n ;k++)
    {
        if(a[k].first > i) i = a[k].second;
        else if(a[k].first > j) j = a[k].second;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
