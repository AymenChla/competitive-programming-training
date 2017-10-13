#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char s[100];
    while(fgets(s,99,stdin))
    {
        cout << s;
    }
    return 0;
}
