#include <iostream>
using namespace std;

int main()
{

    int n,k,v,r;
    cin >> n >> k;

    int i=0;
    int cmp=0;
    for( ; i < k ; i++)
    {
     cin >> v;
     if(v > 0)
        cmp++;
    }


    for(int j=i ; j < n; j++)
    {
        cin >> r;
        if(v==r && r>0) cmp++;
        else break;
    }

    cout << cmp;

    return 0;
}
