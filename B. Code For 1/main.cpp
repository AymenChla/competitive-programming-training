#include <bits/stdc++.h>
using namespace std;


vector<int> v;
void ans(long long n){

    if(n<=1)
        v.emplace_back(n);
    else{
        ans(n>>1);
        ans(n&1);
        //ans(n>>1);
    }
}

int main() {

    long long n;
    cin >> n;
    int l,r;
    cin >> l >> r;

    ans(n);
    int res=0;
    for(int i=l-1; i <r ; i++)
    {
        if(v[i]) res++;
    }
    cout << res << endl;
    return 0;
}