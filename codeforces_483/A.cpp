#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int _max = 1e6;



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 	
	int n; cin >> n;
	int a[n];

	for(int i=0; i < n ;i++) cin >> a[i];
	sort(a,a+n);
	
	cout << a[(n-1)/2] << endl;
	

	return 0;
}
