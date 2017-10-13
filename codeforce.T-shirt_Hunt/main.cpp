#include <iostream>

using namespace std;

int main()
{
    int s;

    cin >> s;

    int i= (s/50)%475;
    for(int j=0 ; j < 25 ; j++)
    {
        i = (i*96 + 42)%475;
        cout << 26 + i << endl;
    }

    return 0;
}
