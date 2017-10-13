#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;
    int cmp=0;
    for(int i=0 ; i < n - 1; i++)
    {
        if(s[i] == s[i+1]) cmp++;
    }

    cout << cmp << endl;
    return 0;
}
