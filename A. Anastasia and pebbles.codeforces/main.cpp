#include <iostream>

using namespace std;

int main()
{
    int n,k;

    cin >> n >> k ;
    int v;
    int nbjour=0;
    for(int i=0 ; i < n ; i++)
    {
        cin >> v;
        nbjour += v/k + (v%k==0?0:1);
    }
    cout << nbjour/2 + (nbjour%2==0 ? 0: 1) << endl;

    return 0;
}
