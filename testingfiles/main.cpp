#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("input.txt");
ofstream cout("output.txt");



int main()
{
    long long a,b;
    cin >> a >> b;
    cout << (long long)(a+b*b);
    return 0;
}
