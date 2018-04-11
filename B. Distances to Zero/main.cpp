#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> z;

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if(!v[i])
            z.emplace_back(i);
    }

    int a=z[0],b=z[0],next=1;
    for(int i=0 ;  i < n ; i++)
    {
        cout << min(abs(a-i),abs(b-i)) << " ";
        if(i==b)
        {

            a=b;
            if(next<z.size())
                b=z[next];
            next++;
        }
    }

    return 0;
}