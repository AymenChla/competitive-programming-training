#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int g=1;
    string s;
    cin >> s;
    n--;
    while(n--)
    {
        string s1;
        cin >> s1;
        if(s!=s1)
            g++;

        s=s1;
    }

    cout << g << endl;
    return 0;
}