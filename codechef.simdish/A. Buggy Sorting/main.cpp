#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n>2){
        for(int i=n ; i > 0 ; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else cout << -1 << endl;

    return 0;
}