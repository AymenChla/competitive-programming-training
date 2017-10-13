#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int a,b,v;

    for(int i=1 ; i <= 5 ; i++)
    {
        for(int j=1 ; j <= 5 ; j++)
        {
            cin >> v;
            if(v==1)
            {
                a = i;
                b = j;
                return !printf("%d\n",(int) (abs(a-3)+abs(b-3)));

            }
        }
    }

    return 0;
}
