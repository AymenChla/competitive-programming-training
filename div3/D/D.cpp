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
 		
 	cout << 1350851717672992089/3 << endl;

	int n; cin >> n;
	unsigned ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int prec[n],next[n],root=0;
	for(int i=0 ; i < n; i++)
	{
		prec[i]=next[i]=i;
		for(int j=0 ; j < n ; j++)
		{
			if(i!=j)
			{		
				if(a[j]==a[i]*3 || a[j]*2==a[i])		
					prec[i]=j;

				if(a[i]==a[j]*3 || a[i]*2==a[j])
					next[i]=j;
			}
		}
		if(prec[i]==i) root=i;
	}	

	
	cout << root << endl;
	for(int i=0 ; i < n ;i++)
		cout << prec[i] << " ";
	cout << endl;

	for(int i=0 ; i <n; i++)
		cout << next[i] << " ";
	cout << endl;

	int i = root;
	for (int j=0 ; j < n ; j++)
	{
		cout << a[i] << " ";
		i=next[i];
	}
	return 0;
}
	