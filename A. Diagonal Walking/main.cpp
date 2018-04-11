#include <iostream>
using namespace std;

int main() {
    string s;

    int n; cin >> n;
    cin >> s;
    string d="";
    for(int i=0 ; i < n ;)
    {
        if(i < n-1 && s[i] == 'U' && s[i+1] == 'R' || s[i] == 'R' && s[i+1] =='U')
        {
            d+="D";
            i+=2;
        }
        else{
            d+=s[i];
            i++;
        }
    }

    cout << d.length() << endl;

    return 0;
}