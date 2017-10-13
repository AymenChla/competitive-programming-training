c#include <iostream>

int main() {
    string s;
    cin >> s;
    int a[26] = {0};
    int k;
    cin >> k;
    char v;

    for(int i=0 ; i < s.length() ; i++)
    {
        a[s[i]-'a']++;
    }

    sort(a,a+26);
    int sum=0,r=0;
    for(int i=0 ; r<k && i < 26 ; i++)
    {
        if(s[i] == 1) {
            r++;
        }
        else{
            sum+=(a[i]-1);
            r+=(a[i] -1 );
        }
    }

    if(r>k) cout << sum << endl;
    else cout << "impossible" << endl;
    return 0;
}