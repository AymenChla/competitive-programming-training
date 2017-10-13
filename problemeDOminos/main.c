#include <stdio.h>
#include <stdlib.h>
int getFall(int **matrice,int touch,int m);

int main()
{
    int nbTest,i,j,k,n,m,l;
    scanf("%d",&nbTest);
    int **matrice= NULL;
    int *touch = NULL;
    int  nbFall;
    for(i=0 ; i < nbTest ; i++)
    {
       scanf("%d",&n);
       scanf("%d",&m);
       scanf("%d",&l);
       nbFall=1;

        matrice = (int **)malloc(m*sizeof(int*));
        for(k=0  ; k< m ;k++)
            matrice[k] = (int *) malloc(2*sizeof(int));

        for(j=0 ; j < m ; j++)
        {
            scanf("%d",&matrice[j][0]);
            scanf("%d",&matrice[j][1]);
        }



        touch = (int*) malloc(sizeof(int)*l);
        for(j = 0 ; j < l ;j++)
            scanf("%d",&touch[j]);


        for(j=0 ; j < l ;j++)
        {
           k=0;
           while(k < m &&  matrice[k][0] != touch[j])
            k++;
           if(k < m)
           {

               nbFall += getFall(matrice,k,m);

           }

        }

        printf("%d",nbFall);
    }

    return 0;
}

int getFall(int **matrice,int touch,int m)
{
    if(matrice[touch][0]==-1)
        return 0;
    else {
            matrice[touch][0]=-1;
            int k=0;

            while( k < m && matrice[k][0] != matrice[touch][1])
                k++;
            if(k < m)
            {
                return 1+ getFall(matrice,k,m);
            }
            else{
                return 1;
            }
        }
}
