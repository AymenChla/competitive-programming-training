#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
   int n; cin >> n;
    vector<int> v(n);
    int i=0;
    while(n--){ cin >> v[i]; i++;}
    sort(v.begin(),v.end());
    for( i=0 ; i < v.size() ; i++)  cout << v[i] << " ";
    cout << endl;
    return 0;
}