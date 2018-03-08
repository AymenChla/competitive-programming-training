#include <iostream>
using namespace std;

int main() {
    int n,b,d;
    cin >> n >> b >> d;

    int sq=0,s=0,a;
    while(n--)
    {
        cin >> a;
        if(a<=b) s+=a;
        if(s>d) sq++,s=0;
    }
    cout << sq << endl;
    return 0;
}