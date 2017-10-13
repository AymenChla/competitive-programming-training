/*
ID: aymen.c1
PROG: ride
LANG: C++11
*/
//#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream cout ("ride.out");
    ifstream cin ("ride.in");

    string a, b;
    cin >> a >> b;

    int r1=1,r2=1;
    for(int i=0 ; i < a.size() ; i++)
            r1 *= ((a[i]%'A')+1);
    for(int i=0 ; i < b.size() ; i++)
        r2 *= ((b[i]%'A')+1);

    if(r1%47 == r2%47) cout << "GO" << endl;
    else cout << "STAY" << endl;

    return 0;
}
