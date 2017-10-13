#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a[26] = {0};
    int k;
    cin >> k;

    if(k > s.length()){
            cout << "impossible" << endl;
            return 0;
    }


    for(int i=0 ; i < s.length() ; i++)
    {
        a[s[i]-'a']++;
    }

    sort(a,a+26,greater<int>());
    int cmpt=0;
    for(int i=0 ; i < 26 && a[i]!=0 ; i++)
    {
        cmpt++;
    }


    if(cmpt>k)
        cout << 0 << endl;
    else{
    int ans=(k-cmpt);
    cout << ans << endl;

    }

    return 0;
}
