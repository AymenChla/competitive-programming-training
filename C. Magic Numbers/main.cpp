#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;

    if(s[0] != '1'){
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < (int)s.length();) {
        string p="";
        p += s[i];
        i++;
        while(i < (int) s.length() && s[i]=='4') p+=s[i], i++;


        if( !(p=="1" || p=="14" || p == "144") )
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}