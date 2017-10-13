#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int val,sum,ans=0;

    for(int i=0 ; i <n ; i++)
    {
        sum = 0;
        for(int j=0 ; j < 3 ; j++)
        {
            cin >> val;
            sum += val;
        }
        if(sum>=2) ans++;
    }

    cout << ans << endl;
    return 0;
}
