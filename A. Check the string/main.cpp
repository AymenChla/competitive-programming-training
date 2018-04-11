#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int na=0,nb=0,nc=0;
    int i=0;
    while(i<s.length() && s[i]=='a') na++,i++;
    if(na==0) {
        cout << "no" << endl;
        return 0;
    }
    while(i<s.length() && s[i]=='b') nb++,i++;
    if(nb==0)
    {
        cout << "no"<< endl;
        return 0;
    }
    while(i<s.length() && s[i]=='c') nc++,i++;

    if( (nc==na || nc ==nb) && na+nb+nc==s.length())
    {
        cout << "yes" << endl;
    }
    else{
            cout << "no" << endl;
    }


    return 0;
}