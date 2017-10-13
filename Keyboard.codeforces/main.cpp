#include <iostream>
using namespace std;

int main() {
    string k1 = "qwertyuiop",k2 = "asdfghjkl;",k3 = "zxcvbnm,./";

    string w;
    string s;
    cin >> w >> s;
    int pos=0;

    for(int i=0 ; i < s.length() ; i++)
    {

        if((pos = k1.find(s[i])) != string::npos){
            if( !pos==0 && w=="R" ) pos--;
            else if( ! (pos == k1.length()-1 && w=="L")) pos++;
            cout << k1[pos];
        }
        else if((pos = k2.find(s[i])) != string::npos){
            if( !pos==0 && w=="R" ) pos--;
            else if( ! (pos == k2.length()-1 && w=="L")) pos++;
            cout << k2[pos];
        }
        else if((pos = k3.find(s[i])) != string::npos){
            if( !pos==0 && w=="R" ) pos--;
            else if( ! (pos == k3.length()-1 && w=="L")) pos++;
            cout << k3[pos];
        }
    }
    return 0;
}