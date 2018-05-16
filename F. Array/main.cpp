#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5;
int visited[MAX];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k; cin >> n >> k;
    int a[n+1];

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }


    memset(visited,0,sizeof visited);

    int j=1;
    set<int> s;
    s.emplace(a[j]);
    visited[a[j]]++;
    j++;
    while(a[j]==a[j-1]) j++;

    int l = j-1;
    int min = a[l];
    //cerr << "min : " << min << endl;
    while(s.size()<k && j <= n){
        visited[a[j]]++;
        if(visited[a[j]] && a[j] == min){
            l++;
            min = a[l];
            //cerr << "new min : " << min << endl;
        }
        s.emplace(a[j]),j++ ;
    }
    int r = j-1;
    //cerr << r << " " << l << endl;
    int m = l;
    for(int i=r ; i >l ; i--)
    {
        if(a[i] == a[l])
            l++;
    }

    if(s.size() == k)
        cout << l << " " << r << endl;
    else cout << -1 << " " << -1 << endl;


    return 0;
}