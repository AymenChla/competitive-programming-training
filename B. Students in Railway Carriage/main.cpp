#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int na=a,nb=b;

    char p;
    int last = -1;
    for (int i = 0; i < n; ++i) {
        cin >> p;
        if(p=='*')
        {
            last = -1;
        }
        else{
            if((last==0 || (b>=a && last == -1)) && b!=0)
            {
                b--;
                last = 1;
            }
            else if( (last==1 || last == -1) && a!=0){
                a--;
                last = 0;
            }
            else{
                last = -1;
            }
        }
    }

    cout << na-a+nb-b << endl;
    return 0;
}