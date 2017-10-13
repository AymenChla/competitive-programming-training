#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[1000];
    char chaine1[1000];

    scanf("%s",chaine);
    scanf("%s",chaine1);

    int i=0;
    int cmp=0;
    while(chaine[i]=='a' && chaine[i] == chaine1[i])
    {
        i++;
    }

    if(chaine[i] == 'a' || chaine[i] == chaine1[i])
        printf("go");
    else printf("no");


    return 0;
}
