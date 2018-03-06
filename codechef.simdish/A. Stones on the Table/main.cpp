#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int m=0;
    for(int i=1,j=0 ; i < n ; i++)
    {
        if(s[i]==s[j])
        {
            m++;
        }
        else{
            j=i;
        }
    }
    cout << m << endl;

    return 0;
}