#include <iostream>
using namespace std;

int main() {
    int n,d,v;
    cin >> n >> d;

    int s=0;
    for(int i=0 ;i <n ; i++)
    {
        cin >> v;
        s+=v;
    }

    int r = s + (n-1)*10;

    if(d - r < 0) cout << -1 << endl;
    else cout << (d-s)/5 << endl;

    return 0;
}