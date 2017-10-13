#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cin >> a >> b;
    int nby=0;

    do{
        nby++;
        a*=3;
        b*=2;
    }while(a <= b);

    cout << nby << endl;
    return 0;
}
