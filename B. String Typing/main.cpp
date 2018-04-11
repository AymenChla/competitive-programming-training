#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int max=0,maxi=-1,maxj=-1;
    int i=0;
    for(int j=i+1 ; j < n ; j++)
    {
        int k=j,l=i;
        while(l<j && s[l]==s[k])
        {
            l++; k++;
        }
        if(l==j && max < j-i){
            max = j-i;

        }
    }


    if(max!=0)
    {
        cout << n - max +1 <<endl;

    }
    else cout << n << endl;
    return 0;
}