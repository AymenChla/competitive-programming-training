#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int main() {

    string s1,s2;
    cin >> s1 >> s2;

    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);

    cout << strcmp(s1.c_str(),s2.c_str()) << endl;

    return 0;
}