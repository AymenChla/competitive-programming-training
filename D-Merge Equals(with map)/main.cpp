#include <bits/stdc++.h>
using namespace std;

map<long long,priority_queue<int>> m;
int main()
{
    int n; cin >> n;
    int ans=n;
    long long v[n+1];

    for(int i=1 ; i <=n ; i++)
    {
        cin >> v[i];
        m[v[i]].emplace(-i);
    }

    int i=0;
    for(auto& ma:m)
    {

        while(ma.second.size()>=2)
        {
            ans--;
            int ind = ma.second.top();
            ma.second.pop();
            v[-ind] = 0;

            ind = ma.second.top();
            ma.second.pop();
            v[-ind]=2*ma.first;

            m[2*ma.first].emplace(ind);

        }
    }

    cout << ans << endl;
    for(int i=1 ;i <= n ; i++)
        if(v[i])
            cout << v[i] << " ";
    cout << endl;

    return 0;
}