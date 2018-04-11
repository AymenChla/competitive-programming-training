#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int p[s.length()];
    memset(p,1,sizeof p);
    int ans = 0;

    int val = stoi(s);
    if((int)sqrt(val)*(int)sqrt(val) == val)
    {
        cout << ans << endl;
        return 0;
    }
    for(int i=0 ; i < s.length() - 1 ; i++)
    {

        p[i] = 0;
        ans++;

        do{
            string r="";
            for(int j=0 ; j < s.length() ; j++)
            {
                if(p[j])
                    r+=s[j];
            }
            if(r[0]=='0')
                continue;

            val = stoi(r);
            if((int)sqrt(val)*(int)sqrt(val) == val)
            {
                cout << ans << endl;
                return 0;
            }

        }while(next_permutation(p,p+s.length()));


    }

    cout << -1 << endl;
    return 0;
}