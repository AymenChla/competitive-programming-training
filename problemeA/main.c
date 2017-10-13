#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[256];
    char chaine1[256];

   if(scanf("%s",chaine))
    {

        int i=1,j=1;
        chaine1[0] = chaine[0];
        while(chaine[i] != '\0')
        {
            while(chaine[i] != '\0' && chaine[i-1] == chaine[i])
            {
                i++;
            }

            chaine1[j++]  = chaine[i];
            i++;

        }
        chaine1[j]= '\0';
        printf("%s",chaine1);
    }
    return 0;
}
