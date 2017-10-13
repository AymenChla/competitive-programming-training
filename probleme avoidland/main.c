#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    int nb;
    int ligne1=0;
    int ligne2=0;
    int var;
    int lassa9;
    scanf("%d",&n);
    int i;
    for(i=0 ; i < n ;i++)
    {
        scanf("%d",&nb);
        ligne1 += nb;
        scanf("%d",&nb);
        ligne2 += nb;

    }

    var = (n*(n+1))/2;
    lassa9 = abs(var - ligne1) + abs(var - ligne2);
    printf("%d",lassa9);

    return 0;
}
