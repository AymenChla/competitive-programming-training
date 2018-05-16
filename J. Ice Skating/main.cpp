#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
int x[MAX],y[MAX];
map<pair<int,int>,int> m;


bool dfs(int a,int b,int n)
{

    if(m[{a,b}]==1) return false;

    m[{a,b}] = 1;
    for(int i=0 ; i < n; i++)
    {
        if((x[i] != a ||  y[i] != b) && (a == x[i] || b == y[i])) {
            dfs(x[i],y[i],n);
        }
    }
    return true;
}


int main() {
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        m[{x[i],y[i]}] = 0;
    }

    int ans=0;
    for(int i=0 ; i < n ;i++)
    {
        if(dfs(x[i],y[i],n)) ans++;
    }

    cout << ans-1 << endl;
    return 0;
}