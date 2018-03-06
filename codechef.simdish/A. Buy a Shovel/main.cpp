#include <iostream>
using namespace std;

int main() {
    int k,r;
    cin >> k >> r;

    int i=1,p=0;
    while(1)
    {
        p = i*k;
        if(p%10==0 || p%10==r) {
            cout << i << endl;
            return 0;
        }
        i++;
    }

    return 0;
}