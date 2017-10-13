#include <bits/stdc++.h>
using namespace std;

int visited[26] = {0};

int main() {

    string s;
    cin >> s;

    int cmpt=0;
    for(int i=0 ; i < s.length() ; i++)
    {
        if(visited[s[i] - 'a'] == 0)
        {
            visited[s[i] - 'a'] = 1;
            cmpt++;
        }
    }

    if(cmpt%2) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    return 0;
}