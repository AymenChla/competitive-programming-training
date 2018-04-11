#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+1;
int visited[MAX];

int dfs(int x,int k)
{
    if(visited[x]) return 1;
    if(x<10)
    {
        if(x == k) return 1;
        return 0;
    }

    int p=1;
    while(x>0)
    {
        int r=x%10;
        p*= (r==0 ? 1:r);
        x/=10;
    }
    return dfs(p,k);
}

int main() {

    int q,l,r,k,ans;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r >> k;
        ans=0;
        memset(visited,0,sizeof(visited));
        for (int j = l ; j <= r ; ++j) {
           if(dfs(j,k))
           {
               ans++;
               visited[j]=1;
           }
        }
        cout << ans << endl;
    }

    return 0;
}