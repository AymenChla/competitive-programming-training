#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l=0,u=0;
    for(int i=0 ; i < s.length() ; i++)
    {
        if(s[i]>='a' && s[i]<='z') l++;
        else u++;
    }



    if(l>=u)
        std::transform(s.begin(), s.end(),s.begin(), ::tolower);
    else
        for(int i=0 ; i < s.length() ; i++)
            std::transform(s.begin(), s.end(),s.begin(), ::toupper);

    cout << s << endl;
    return 0;
}