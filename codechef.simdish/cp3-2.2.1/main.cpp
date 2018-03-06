#include <iostream>
#include <algorithm>

int ex1();
int exo2();

using namespace std;

int main() {

    return exo2();

}

int ex1() {
    int n;
    cin >> n;
    int s[n];
    for(int i=0 ; i < n ; i++)
    {
        cin >> s[i];
    }

    sort(s,s+n);
    for(int i=1; i < n ; i++)
    {
        if(s[i]==s[i-1]) {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}

int exo2()
{
    int n,v;
    cin >> n >> v;
    int s[n];
    for(int i=0 ; i < n ; i++)
    {
        cin >> s[i];
    }

    int a;
    sort(s,s+n);


    for(int i=0; i < (lower_bound(s,s+n,v)-s);i++)
    {
        a = s[i];
        if( (lower_bound(s,s+n,v-a)-s) != 0){
            cout << a << "+" << (v-a) << "=" << v << endl;
            return 0;
        }
    }

    cout << "Impossible" << endl;

    return 0;
}