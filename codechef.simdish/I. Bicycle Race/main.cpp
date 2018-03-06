#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    char d = 'u';
    int x1,y1,x,y,res=0;
    cin >> x1 >> y1;
    cin >> x1 >> y1;
    n--;
    while(n--)
    {
        cin >> x >> y;

        switch (d)
        {
            case 'u':
                if(x<x1) res++;
                break;
            case 'd':
                if(x>x1) res++;
                break;
            case 'r':
                if(y>y1) res++;
                break;
            case 'l':
                if(y<y1) res++;
                break;
        }

        if(x<x1) d='l';
        if(x>x1) d='r';
        if(y<y1) d='d';
        if(y>y1) d='u';

        x1=x;
        y1=y;
    }

    cout << res << endl;
    return 0;
}

