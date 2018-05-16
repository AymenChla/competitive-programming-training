#include <bits/stdc++.h>
using  namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m; cin >> n >> m;
    int a[n+1]={0};
    set<int> s;

    for(int i=1 ; i <= n ; i++)
        s.emplace(i);

    while(m--)
    {
        int l,r,w; cin >> l >> r >> w;
        set<int>::iterator p  = s.lower_bound(l);
        vector<int> b;
        while(p!=s.end())
        {
            int v = *p;
            if(v>r)
                break;

            iota(a,a+n,1);
            if(v!=w)
            {
                a[v] = w;
                b.emplace_back(v);
            }

            p++;
        }

        for (int i = 0; i < b.size(); ++i) {
            s.erase(b[i]);
        }
    }

    for(int i=1 ; i <= n ; i++)
        cout << a[i] << " ";

    return 0;
}