#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,v;
    long long o=0;
    cin >> n;
    int i=0;
    while(i < n && o==0)
    {
        cin >> v;
        if(v!=0 && v%2!=0) o++;
        i++;
    }

    if(o==0) cout << "Second" << endl;
    else cout << "First" << endl;

    return 0;
}
