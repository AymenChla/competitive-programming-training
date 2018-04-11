#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    int visited[100][100]={0};

    for(int i=0 ; i < n ; i++)
    {
        cin >> s[i];
    }

    for(int i=0 ; i < n ; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            if(!visited[i][j] && s[i][j]=='#')
            {
                if(!(j-1>=0 && i+1<n && s[i+1][j-1]== '#' && !visited[i+1][j-1])
                        || !(i+1<n && s[i+1][j] == '#' && !visited[i+1][j])
                        || !(i+2<n && s[i+2][j] == '#' && !visited[i+2][j])
                        || !(i+1<n  && j+1<n && s[i+1][j+1]=='#' && !visited[i+1][j+1]))
                {
                    cout << "NO" << endl;
                    return 0;
                }
                else{
                    visited[i+1][j-1]=1;
                    visited[i+1][j]=1;
                    visited[i+2][j]=1;
                    visited[i+1][j+1]=1;
                }

            }
        }
    }

    cout << "YES" << endl;
    return 0;
}