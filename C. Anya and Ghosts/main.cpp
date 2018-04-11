#include <bits/stdc++.h>
using namespace std;
const int MAX=100000;
int visited[MAX]={0};

int main() {
    int m,t,r;

    cin >> m >> t >> r;
    int c[m]={0};
    vector<int> p;
    int ans=0;
    for (int i = 0,v; i < m; ++i) {
        cin >> v;
        sort(p.begin(),p.end(),greater<int>());
        int j=0;
        while(j<p.size() && p[j]+t>=v && c[i]<r)
        {
            c[i]++;
            j++;
        }

        j=1;
        while(c[i]<r && v-j+t>=v)
        {

            if(v-j<0 && !visited[MAX+(v-j)])
            {
                c[i]++;
                visited[MAX+(v-j)] = 1;
                p.emplace_back(v-j);
                ans++;
            }
            else if(v-j>=0 && !visited[v-j])
            {
                c[i]++;
                visited[v-j]=1;
                p.emplace_back(v-j);
                ans++;
            }

            j++;
        }
        if(c[i]<r)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}