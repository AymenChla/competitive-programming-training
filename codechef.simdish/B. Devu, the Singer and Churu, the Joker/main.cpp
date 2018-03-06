#include <iostream>
using namespace std;

int main() {
    int n,d,v;
    cin >> n >> d;

    int s=0;
    for(int i=0 ;i <n ; i++)
    {
        cout << v;
        s+=v;
    }

    if(d - s < 0) cout << -1 << endl;
    else cout << d-s << endl;

    return 0;
}