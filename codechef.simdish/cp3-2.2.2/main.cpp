#include <iostream>

void ex1();

void ex2();

void ex3();

using namespace std;

int main() {


    return 0;

}

void ex3() {
    int s;
    cin >> s;
    s =s & ~(s&(-s));
    cout << s << endl;
}

void ex2() {
    int s;
    cin >> s;
    if((s&(s-1))==0) cout << "power"<< endl;
    else cout << "not" << endl;
}

void ex1() {
    int s=7,N=4;
    cin >> s >> N;

    cout << "bit manip: " << (s&(N-1)) << endl;
    cout << "modulo: " << s%N << endl;
}