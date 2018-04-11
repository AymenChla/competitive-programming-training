#include <bits/stdc++.h>
using namespace std;

int count(string s)
{
    int sum=0;
    int p=1;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]=='C')
            p*=2;
        else{
            sum+=p;
        }
    }

    return sum;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int d;
        string s;
        cin >> d >> s;

        bool ok=true,impo=false;
        int perm=0;
        while(ok)
        {
            if(count(s)<=d)
            {
                break;
            }
            int j=0;
            while(j<s.length() && s[j]=='S') j++;
            while(j<s.length() && s[j]=='C') j++;
            if(j<s.length())
            {
                s[j-1] = 'S';
                s[j] = 'C';
                perm++;
            }
            else{
                ok=false;
                impo = true;
            }
        }
        if(!impo)
            cout << "Case #" << i+1 << ": " << perm << endl;
        else cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
    }
    return 0;
}