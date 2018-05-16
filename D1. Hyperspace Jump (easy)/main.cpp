#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    map<double,int> m;

    double A[n];

    for(int i=0 ;i < n; i++)
    {
        string eq,a="",b="",c="";
        double  x,y,z;

        cin >> eq;

        int j=1;
        while(j<eq.length() && eq[j]!='+') a += eq[j],j++;
        j++;
        while(j<eq.length() && eq[j]!=')') b += eq[j],j++;
        j+=2;
        while(j<eq.length()) c += eq[j],j++;


        x = stoi(a);
        y = stoi(b);
        z = stoi(c);

        A[i] = (x+y)/z;
        m[(x+y)/z]++;
    }

    for(int i=0 ; i< n ; i++)
    {
        cout << m[A[i]] << endl;
    }
    return 0;
}