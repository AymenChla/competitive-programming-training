#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    while(n--)
    {
        string s;
        int x=0,y=0;
        cin >> s;

        for(int i=0 ; i < s.length() ; i+=2)
        {
            if(s[i+1] == 'E'){
              x+=atoi(s.substr(i,i+1).c_str());
            }
            else if(s[i+1] == 'O'){
              x-= atoi(s.substr(i,i+1).c_str());
            }
            else if(s[i+1] == 'N'){
            y+= atoi(s.substr(i,i+1).c_str());
            }
            else if(s[i+1] == 'S')y-= atoi(s.substr(i,i+1).c_str());
        }

        cout << abs(x) + abs(y) << endl;
    }
    return 0;
}
