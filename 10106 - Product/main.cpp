#include <bits/stdc++.h>
using namespace std;

const int MAX = 600;
int R[MAX];

int main() {

    string a,b;
    while(cin >> a)
    {
        cin >> b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        bzero(R,MAX);

        for(int i=0 ; i < a.length() ; i++)
        {
            for (int j = 0; j < b.length(); ++j) {
                R[i+j] += (a[i]-'0')*(b[j]-'0');
            }
        }


        for(int i=0 ; i < MAX-1 ; i++)
        {
            R[i+1] += R[i]/10;
            R[i] %= 10;
        }

        int i=MAX-1;
        while(i>0 && R[i]==0) i--;
        for(; i>=0 ; i--)
            cout << R[i];
        cout << endl;
    }
    return 0;
}