#include <bits/stdc++.h>
const int maxn = 2e5 +520;
using namespace std;
#define ll long long

struct pr
{
    ll l,r;
    bool operator <(const pr x)const
    {
        return x.r > r;
    }
}P[maxn];

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%I64d%I64d",&P[i].l,&P[i].r);
    sort(P,P+N);

    ll TV1 = P[0].r,TV2 = -1;
    for(int i=1;i<N;i++)
    {
        if(TV1<P[i].l)
            TV1 = P[i].r;
        else if(TV2 < P[i].l)
            TV2 = P[i].r;
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
