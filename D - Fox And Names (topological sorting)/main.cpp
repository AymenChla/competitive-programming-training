#include <bits/stdc++.h>
using  namespace std;

vector<set<int>> v(26);
stack<int> st;
int visited[26]={0};

int iscycle(int n)
{
    for(auto it=v[n].begin() ; it!=v[n].end(); it++)
    {
        if(visited[*it]) return 1;
        visited[*it]=1;
        return iscycle(*it);
    }
    return 0;
}

int tp(int n)
{
    visited[n]=1;
    for(auto it=v[n].begin() ; it!=v[n].end(); it++)
    {
        if(!visited[*it])
            tp(*it);
    }
    st.push(n);
    return 0;
}

int main() {
    int n;
    cin >> n;
    string p; cin >> p;
    for (int i = 0; i < n - 1; ++i) {
        string s;
        cin >> s;
        int j=0;
        while(j<s.length() && j < p.length() && s[j]==p[j])j++;
        if(j==s.length() && j < p.length())
        {
            cout << "Impossible" << endl;
            return 0;
        }
        if(j<s.length() && j <p.length())
        {
            v[p[j]-'a'].insert(s[j]-'a');
        }
        p=s;
    }

    for(int i=0 ; i < 26 ; i++,memset(visited,0, sizeof(visited)))
        if(iscycle(i))
        {
            cout << "Impossible" << endl;
            return 0;
        }

    memset(visited,0, sizeof(visited));
    for(int i=0 ; i < 26 ; i++)
    {
        if(!visited[i])
            tp(i);
    }

    while(!st.empty())
    {
        cout << char(st.top()+'a');
        st.pop();
    }
    cout << endl;
    return 0;
}