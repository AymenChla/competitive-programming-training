#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,n,b,countA=0,countB=0,c;
    cin >> n >> a;
    vector<int> tab;
    int k=n;
    while(k--)
    {
        cin >> c;
        tab.push_back(c);
    }

    bool possible = true;

    for(int i=1 ; i <= 1000000 ; i++)
    {
        possible = true;
        countA=0,countB=0;
        if(i != a)
        {
            b=i;
            for(int i =0 ; possible && i < n ; i++)
            {

                if(tab[i] == a) countA++;
                else if(tab[i] == b) countB++;

                if(countA > countB)
                    possible = false;


            }

            if(possible)
                break;
        }


    }

    if(!possible) cout << -1 << endl;
    else cout << b;

    return 0;
}
