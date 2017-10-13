#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int cmp=0,n=s.length();

    for(int i=0 ; i < n-1 ; i++)
    {
        cmp = 1;
        while(i <= n - 1 && s[i]==s[i+1] &&  cmp < 7){
            cmp++;
            i++;
        }
        if(cmp==7) return !printf("YES\n");
    }

    cout << "NO" << endl;
    return 0;
}
