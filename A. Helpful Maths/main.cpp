    #include <bits/stdc++.h>
    using namespace std;
    int main(){

        string s;
        cin >> s;
        vector<int> a;
        for(int i=0 ; i < s.length() ; i++)
        {
            if(s[i]!='+') a.emplace_back(s[i]-'0');
        }

        sort(a.begin(),a.end());
        for(int i=0; i < a.size() ;i++)
        {
            if(i!=a.size()-1)
            {
                cout << a[i] << "+";
            }
            else cout << a[i] << endl;
        }

        return 0;
    }