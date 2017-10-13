#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char up;
    cin >> s;

    for(int i=0 ; i < s.length(); i++)
    {
       up = toupper(s[i]);
       if(up=='A' || up == 'O' || up == 'Y' || up == 'E' || up == 'U' || up == 'I');
       else cout << "." << (char) tolower(s[i]);

    }


    return 0;
}
