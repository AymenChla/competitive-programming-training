#include<bits/stdc++.h>

#define MAX 200005

using namespace std;

int n,v[MAX],k,i;

int main()
{
    scanf(" %d %d",&n,&k);
    if(n<k){ printf("-1\n"); return 0; }
    for(i=0; i<n; i++)
        scanf(" %d",v+i);
    sort(v,v+n);
    int r = k>0?v[k-1]:1;
    for(i=0; i<n and v[i]<=r; i++); i--;
    if(i<n and i>k-1){ printf("-1\n"); return 0; }
    printf("%d\n",r>0?r:-1);
    return 0;
}