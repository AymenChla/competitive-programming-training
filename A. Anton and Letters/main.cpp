#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    set<char> v;
    for(int i=1 ; i < s.length() ; i++)
    {
        if(s[i]!=',' && s[i]!='}') v.insert(s[i]);
        else i++;
    }

    cout << v.size() << endl;
    return 0;
}