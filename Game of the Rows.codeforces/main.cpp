#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int nbp = 0;
    int nbFour = n,nbTwo=2*n,fourWithOne=0,fourWithTwo=0;
    vector<int> v(k);
    for(int i=0 ; i < k ; i++) scanf("%d",&v[i]);
    sort(v.rbegin(),v.rend());
    for(int i=0 ; i < k ; i++)
    {
        nbp = v[i];

        //fill place of four
        while(nbp>=4 && nbFour>0)
        {
            nbp -= 4; nbFour--;
        }

        //fill place of two
        while(nbp>=2 && nbTwo > 0)
        {
            nbp-=2; nbTwo--;
        }

        //fill all remaining place of four
        while(nbp>0 && nbFour > 0)
        {
            if(nbp>=2){ nbFour--; fourWithTwo++; nbp-=2; }
            else if(nbp == 1){ nbFour--; fourWithOne++; nbp--;}
        }

        //fill remaining extra places
        while(nbp>0 && fourWithOne >0)
        {
            nbp-=2; fourWithOne--;
        }

        //extra with 1
        while(nbp>0 && fourWithTwo> 0)
        {
            nbp--; fourWithTwo--;
        }

        if(nbp==1 && nbTwo > 0)
        {
            nbp--; nbTwo--;
        }

        if(nbp>0) return !printf("NO\n");
    }

    cout << "YES" << endl;
    return 0;
}
