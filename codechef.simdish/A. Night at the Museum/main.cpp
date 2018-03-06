#include <iostream>
using namespace std;

int main() {

    char a[26];
    for(int i=0 ; i < 26 ; i++)
    {
        a[i] = 'a'+i;
    }

    string s; cin >> s;
    int l = a[0];

    int res=0;
    for(int i=0 ; i < s.length() ; i++)
    {
        int x=0,y=0;
        char r=l;
        while(r!=s[i])
        {
            if(r=='z') r='a';
            else r++;
            x++;
        }
        r=l;
        while(r!=s[i])
        {
            if(r=='a') r='z';
            else r--;
            y++;
        }
        l=s[i];
        res += min(x,y);
    }

    cout << res << endl;
    return 0;
}