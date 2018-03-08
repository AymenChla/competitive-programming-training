#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> m[4];
    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        m[a].emplace_back(i);
    }
    int ans = min(min(m[1].size(),m[2].size()),m[3].size());
    cout << ans << endl;
    for (int j = 0; j < ans ; ++j) {
        cout << m[1][j] << " " << m[2][j] << " " << m[3][j] << endl;
    }

    return 0;
}