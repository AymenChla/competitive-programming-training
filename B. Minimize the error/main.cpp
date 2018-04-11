#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;

int main() {
    int n,k1,k2;
    cin >> n >> k1 >> k2;
    priority_queue<int> queue;

    int a[n],b[n];
    for(int i=0 ; i <n ; i++)
    {
        cin >> a[i];
    }
    for(int i=0 ; i <n ; i++)
    {
        cin >> b[i];
        queue.emplace(abs(a[i]-b[i]));
    }

    int k = k1+k2;
    while(k!=0)
    {
        int v = queue.top();
        queue.pop();

        if(v>0)
            v--,k--;
        else
            v++,k--;

        queue.emplace(v);
    }

    ll sum=0;
    while(!queue.empty())
    {
        sum += (ll)queue.top()*(ll)queue.top();
        queue.pop();
    }

    cout << sum << endl;
    return 0;
}