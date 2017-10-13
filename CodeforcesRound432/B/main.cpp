#include <bits/stdc++.h>
using namespace std;

#define sz(v) ((int)(v).size())
#define all(v) ((v).begin(),(v).end())
#define mp(a,b) make_pair(a,b)
#define forn(i,n) for(int i=0 ; i < (int) n ; i++)
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

void _pv(auto *a,int n);
void _pv(vi a);
void _pv(vii a);

long double distance(long long x1, long long y1, long long x2 , long long y2)
{
    return (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    long long ax,ay,bx,by,cx,cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if( ( (cy-ay)*(bx-ax) != (by-ay)*(cx-ax)) && (distance(ax,ay,bx,by) == distance(bx,by,cx,cy)) )
        cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}

void _pv(vi a)
{
    for(int i=0 ; i < sz(a) ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void _pv(vii a)
{
    for(int i=0 ; i < sz(a)  ;i++)
    {
        cout << "(" << a[i].first << "," << a[i].second << ")" << " ";
    }
    cout << endl;
}

void _pv(auto *a,int n)
{
    for(int i=0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
