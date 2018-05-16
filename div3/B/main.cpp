#include <bits/stdc++.h>
using namespace std;

const int MAX_= 1e6+5;
int S[MAX_];

int main() {


    memset(S,0, sizeof(S));
    int n; cin >> n;
    string s; cin >> s;

    string ans="";
    int m=0;
    for (int i = 0; i < n-1; ++i) {
        int b=(s[i]*27)+s[i+1];
        S[b]++;
        if(S[b]>m){
            ans =s.substr(i,2);
            m = S[b];
        }
    }

    cout << ans << endl;
    return 0;
}