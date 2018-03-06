#include <iostream>
using  namespace std;

int main() {
    int n,p=0;

    cin >> n;

    p=n;
    for(int i=2 ; i <= n-1 ; i++)
    {
        p+=(n-i)*i;
    }
    p+=n-1;

    cout << p << endl;

    return 0;
}