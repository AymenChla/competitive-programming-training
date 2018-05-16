#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    vector<vector<int>> v(n+1);

    for(int i=0 ; i < n-1 ; i++)
    {
        int a,b;
        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }

    int ans=0;
    for(int i=1 ; i <= n ; i++)
    {
        if(v[i].size()==1)
            ans++;
    }

    cout << ans << endl;
    return 0;
}