#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int tab[n];

    for(int i=0 ; i < n ; i++)
        cin >> tab[i];

    int pos1 = 0,pos2 = n-1;

    while(pos1 < n - 1 && tab[pos1+1]>tab[pos1])
        pos1++;



    while(pos2 > 0 && tab[pos2-1]>tab[pos2])
        pos2--;

    for( ; pos1 < pos2 && tab[pos1] == tab[pos1+1] ; pos1++);

    if(pos1 != pos2) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
