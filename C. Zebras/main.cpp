#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    deque<int> q0,q1;
    vector<vector<int>> v;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]=='0')
        {
            if(q0.empty())
            {
                vector<int> a;
                a.emplace_back(i);
                v.emplace_back(a);
                q1.push_front(v.size()-1);
            }
            else{
                int j=q0.back();
                q0.pop_back();
                v[j].emplace_back(i);
                q1.push_front(j);
            }
        }
        else{
            if(q1.empty())
            {
                cout << -1 << endl;
                return 0;
            }
            else{
                int j=q1.back();
                q1.pop_back();
                v[j].emplace_back(i);
                q0.push_front(j);
            }
        }
    }
    if(!q0.empty())
    {
        cout << -1 << endl;
        return 0;
    }
    cout << v.size() << endl;
    for(int i=0 ; i < v.size() ; i++)
    {
        cout << v[i].size();
        for(int j=0 ; j < v[i].size() ; j++)
        {
            cout << " " << v[i][j]+1;
        }
        cout << endl;
    }
    return 0;
}