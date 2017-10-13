#include <fstream>
//#include <iostream>
#include <cmath>
using namespace std;
ifstream cin("input.txt");
ofstream cout("output.txt");


int main()
{
    int n,r=0;
    cin >> n;
    bool tb=false,pb=false;
    int* t = new int[n], *p = new int[n];

    for(int i=0 ; i < n ; i++)
    {
        cin >> t[i];

    }
    for(int i=0 ; i < n ; i++)
    {
        cin >> p[i];
    }

    for(int i=0 ; i <n ; i++)
    {
        if(t[i] > p[i])
        {
                tb=true;
                r+=t[i];
        }else{
                pb=true;
                r+=p[i];
        }
    }

    if(!tb || !pb)
    {
        int j=0;
        for(int i=1 ; i <n ; i++)
        {
            if( abs(t[i] -p[i] ) < abs(t[j]-p[j]) )
            {
                j=i;
            }
        }

        if(!tb){
            r -= p[j];
            r += t[j];
        }
        else{

            r -= t[j];
            r += p[j];
        }
    }

    cout << r;

    return 0;
}

