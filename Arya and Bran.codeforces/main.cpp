#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int cand=0,temp;
    int r=0,t=0;

    cin >> n >> k;

    for(int i=0 ; i < n ; i++)
    {
        cin >> temp;
        cand += temp;

        if(cand >= 8 ){
          cand-=8;
          t+=8;
        }
        else{
            t+=cand;
            cand=0;
        }

        ++r;
        if(t>=k)
            break;

    }

    if(t < k)
        cout << -1;
    else cout << r;

    return 0;
}
