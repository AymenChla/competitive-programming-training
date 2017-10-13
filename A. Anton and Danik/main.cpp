#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;

        cin >> n >> s;

        int d=0,a=0;

        for(int i=0 ; i < s.length() ; i++)
        {

            if(s[i] == 'A') a++;
            else if(s[i] == 'D') d++;
        }

        if(a>d) cout << "Anton" << endl;
        else if(d>a) cout << "Danik" << endl;
        else cout << "Friendship" << endl;
    return 0;
}
