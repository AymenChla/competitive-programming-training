#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    int minv=1e9,maxv=0;

    for(int i=0 ;i < n ; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;

        if(v[i].first<minv)
            minv= v[i].first;

        if(v[i].second>maxv)
            maxv = v[i].second;

    }

    for(int i=0 ;i < n ; i++)
    {
        if(v[i].first == minv && v[i].second == maxv)
        {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}