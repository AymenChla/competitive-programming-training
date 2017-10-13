#include <bits/stdc++.h>
using namespace std;
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define forn(i,n) for(int i=0 ; i < (int) n ; i++)
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;


int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n,k,m;
    cin >> n >> k >> m;

    int a[n];
    forn(i,n) cin >> a[i];
    sort(a,a+n);


    return 0;
}
