#include <bits/stdc++.h>
using namespace std;

#define sz(v) ((int)(v).size())
#define all(v) ((v).begin(),(v).end())
#define mp(a,b) make_pair(a,b)

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

void _pv(vi a);
void _pv(vii a);

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n; cin >> n;

    int a[n];
    for(int i=0 ; i < n ; i++)
        cin >> a[i];

    if(n%2 == 0 || (a[0]%2 == 0 || a[n-1]%2 == 0) ) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}

void _pv(vi a)
{
    for(int i=0 ; i < (int) sz(a) ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void _pv(vii a)
{
    for(int i=0 ; i < (int) sz(a)  ;i++)
    {
        cout << "(" << a[i].first << "," << a[i].second << ")" << " ";
    }
    cout << endl;
}
