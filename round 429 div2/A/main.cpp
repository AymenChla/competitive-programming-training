#include <iostream>
#include <stdio.h>
using namespace std;
int a[256] = {0};
int main()
{
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;
    for(int i=0 ; i < n ; i++)
    {
        a[s[i]]++;
        if(a[s[i]] > k) return !printf("NO\n");
    }

    cout << "YES" << endl;

    return 0;
}
