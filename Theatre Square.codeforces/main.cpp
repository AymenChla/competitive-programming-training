#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double  n,m,a;

    cin >> n >> m >> a;
    cout << (long long)( (n/a >= 1 ? ceil(n/a) : 1) * (m/a >= 1 ? ceil(m/a) : 1));


    return 0;
}
