#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int visited[26]={0};

void print(int a);

int cycle(int a, int s)
{

    for(int i=0 ; i < v[a].size() ;i++)
    {
        if(v[a][i]==s){
            return 1;
        }
        return cycle(v[a][i],s);
    }
    return 0;
}

int parent(int a)
{
    for(int i=0; i< 26;i++)
    {
        for(int j=0;j < v[i].size() ;j++)
        {
            if(v[i][j]==a && !visited[i])
            {
                    a = parent(i);
                    print(a);
            }
        }
    }
    return a;
}

void print(int a) {
    if(!visited[a])
    {
        cout << char(a+'a');
        visited[a]=1;
        for(int k=0 ; k < v[a].size();k++)
        {
            //int s=parent(v[a][k]);
            parent(v[a][k]);
            print(v[a][k]);
        }
    }
}

void res()
{
    int s;
    for(int i=0; i< 26;i++)
    {
        for(int j=0; j<v[i].size();j++)
        {
            s = parent(i);
            print(s);
        }
    }
    for(int i=0; i < 26; i++)
    {
        if(!visited[i])
        {
            cout << char(i+'a');
            visited[i]=1;
        }
    }
    cout << endl;
}

int main() {
    int n;
    string s1, s2;

    cin >> n;
    v = vector<vector<int>>(26);

    cin >> s1;
    for (int i = 1; i < n; i++) {
        cin >> s2;
        int j = 0;
        while (j < s1.length() && j < s2.length() && s1[j] == s2[j]) j++;
        if(j<s1.length() && j==s2.length())
        {
            cout << "Impossible" << endl;
            return 0;
        }
        else if (j < s1.length() && j < s2.length()) {
            v[s1[j]-'a'].push_back(s2[j]-'a');
            if(cycle(s1[j]-'a',s1[j]-'a'))
            {
                cout << "Impossible" << endl;
                return 0;
            }
        }
        s1=s2;
    }

    res();

    return 0;
}