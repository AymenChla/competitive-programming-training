#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,cmb,triste=0;

    double x;
    char signe;


    cin >> n >> x;

    for(int i=0 ; i < n ; i++)
    {
        cin >> signe;
        cin >> cmb;

        if(signe == '+')
            x+=cmb;
        else
        {
            if(cmb > x)
                triste++;
            else
                x -=cmb;
        }
    }
    printf("%.lf",x);
    cout << " " << triste << endl;

    return 0;
}
