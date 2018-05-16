#include <bits/stdc++.h>
using  namespace std;

const int MAX = 1e6;
const int mod = 1e9+7;
long long BIT[MAX+1];
long long toti[MAX];
long long totiS[MAX];

void compute()
{
    int i, j, k, ans;
    for(i = 0;i < MAX;++i)
        toti[i] = i;
    for(i = 2;i < MAX;++i)
    {
        if(toti[i] == i)
        {
            toti[i] = i - 1;
            for(j = 2*i;j < MAX;j += i)
                toti[j] -= (toti[j] / i);
        }
    }
    for(i = 1;i < MAX;++i)
    {
        for(j = i, k = 1;j < MAX;j += i, k++)
        {
            totiS[j] += i*toti[k];
        }
    }
}

void update(int x,long long y,int n)
{
    for(;x<=n; x +=x&-x)
            BIT[x] = (BIT[x]+y)%mod;

}

long long query(int x)
{
    long long sum=0;
    for(;x>0; x -= x&-x)
        sum = (sum + BIT[x])%mod;

    return sum;
}

int main() {

    int n; cin >> n;
    int A[n+1];
    memset(BIT,0, sizeof BIT);

    compute();

    for(int i=1 ; i <=n ; i++ )
    {
        cin >> A[i];
        update(i,totiS[A[i]],n);
    }

    int m; cin >> m;
    while(m--)
    {
        char q; cin >> q;
        if(q=='C')
        {
            int x,y; cin >> x >> y;
            cout << query(y) - query(x-1) << endl;
        }
        else{
            int x,y; cin >> x >> y;
            long long v = query(x);
            y = totiS[y];
            update(x,y-v,n);
        }
    }

    return 0;
}