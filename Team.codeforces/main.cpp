#include <iostream>

using namespace std;

int main()
{
    int n;
    int v;

    cin >> n;
    int nb=0;
    for(int i=0 ; i < n ; i++)
    {
        int cmp=0;
        for(int j=0 ; j < 3 ; j++)
        {
            cin >> v;
            cmp += v;
        }
        if(cmp >= 2) nb++;
    }

    cout << nb << endl;

    return 0;
}
