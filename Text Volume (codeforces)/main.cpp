#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,nbchar=0;
    string w;
    cin >> n;
    int v,maxv=0;
    do{
        cin >> w;
        nbchar+=w.length();
        v=0;
        for(int i=0 ; i < w.length() ;i++)
        {
            if(w[i] >= 'A' && w[i] <= 'Z')
            {
                v++;
            }
        }
        if(v > maxv) maxv = v;

        if(nbchar < n) nbchar++;

    }while(nbchar < n);

    cout << maxv;
    return 0;
}
