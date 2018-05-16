#include <bits/stdc++.h>
using namespace std;

int split(string &a , string &b)
{
    if(a==b) return true;
    if((int)a.length()&1) return false; //todo
    string a1,a2,b1,b2;

    a1 = a.substr(0,a.length()/2);
    a2 = a.substr(a.length()/2,a.length());

    b1 = b.substr(0,b.length()/2);
    b2 = b.substr(b.length()/2,b.length());
    /*cerr << "=========" << endl;
    cerr << a1 << endl;
    cerr << a2 << endl;
    cerr << b1 << endl;
    cerr << b2 << endl;
    cerr << "=========" << endl;*/
    return ( split(a1,b1) && split(a2,b2) ) | ( split(a1,b2) && split(a2,b1) );
}

int main() {

    string a,b; cin >> a >> b;

    if(split(a,b))
        cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}