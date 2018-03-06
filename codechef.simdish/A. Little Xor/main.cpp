#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];


    for(int i=0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    long long s;
    long long max_=a[0];
    for(int i=0; i < n ; i++)
    {
        s=a[i];
        for(int j=i ; j < n ; j++ )
        {
            s = s^a[j];
            max_ = max(max_,s);
        }

    }

    cout << max_ << endl;

    return 0;
}