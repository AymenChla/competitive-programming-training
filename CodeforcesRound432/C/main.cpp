#include <bits/stdc++.h>
using namespace std;

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define forn(i,n) for(int i=0 ; i < (int) n ; i++)

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

void _pv(auto *a,int n);
void _pv(vi a);
void _pv(vii a);

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n;
    cin >> n;
    int m[n][5];
    int x[5],y[5];
    double lengthx=0.,lengthy=0.;
    int scalar = 0;
    vi good;
    forn(i,n)
    {
        forn(j,5)
        {
            cin >> m[i][j];
        }
    }

    forn(i,n)
    {
        forn(j,n)
        {
            if(i == j) continue;
            forn(k,n)
            {
                if(k == j || k == i) continue;
                forn(l,5)
                {
                    x[l] = m[j][l] - m[i][l];
                    y[l] = m[k][l] - m[i][l];
                }
                scalar = 0;
                lengthx  = lengthy = 0;
                forn(l,5)
                {
                    scalar += x[l]*y[l];
                    lengthx += x[l]*x[l];
                    lengthy += y[l]*y[l];
                }
                lengthx = sqrt(lengthx);
                lengthy = sqrt(lengthy);

                if( (acos(scalar/(lengthx*lengthy))*180.0/M_PI)<90)
                    goto cnt;

            }
        }

        good.push_back(i+1);
        //ax 5*2 bad points
        if(sz(good)==10) break;

        cnt:;
    }

    sort(all(good));
    cout << sz(good) << endl;
    forn(i,sz(good))
        cout << good[i] << endl;

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
