#include <iostream>

using namespace std;

int main()
{

    int n;
    int x=0;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        for(int i=0 ; i < s.length() ; i++)
        {
            if(s[i] == '+')
            {
                x++;
                i++;
            }
            else if(s[i] == '-')
            {
                x--;
                i++;
            }
            else i++;

        }

    }

    cout << x << endl;
    return 0;
}
