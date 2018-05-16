#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int _max = 99;


char m[4][_max];

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 	
	int n; cin >> n;
	int k; cin >> k;

	int r=k;
	

	

	
	if(k%(n-2)==0)
	{
		cout << "YES" << endl;
		for(int i=0 ; i < n ;i++)
		{
			cout << ".";
		}
		cout << endl;
		for(int j=0 ; j < 2 ; j++)
		{
		 	cout << ".";
		 	for(int i=0 ; i < (n-2) ; i++)
		 	{
	 		
	 			if(r)
	 			{
	 				cout << "#";
	 				r--;
	 			}
	 			else{
	 				cout << ".";
	 			}
		 		
		 	}
		 	cout << "."  << endl;
		}
		
	}
	else if(k%2==0){
		cout << "YES" << endl;
		for(int i=0 ; i < n ;i++)
		{
			cout << ".";
		}
		cout << endl;
		for(int j=0 ; j < 2 ; j++)
		{
			r=k/2;
		 	cout << ".";
		 	for(int i=0 ; i < (n-2) ; i++)
		 	{
	 		
	 			if(r)
	 			{
	 				cout << "#";
	 				r--;
	 			}
	 			else{
	 				cout << ".";
	 			}
		 		
		 	}
		 	cout << "." << endl;
		}
	}
	else{

		if(k>2*(n-1)) {
			cout << "NO" << endl;
			return 0;
		}
		cout << "YES" << endl;
		for(int i=0 ; i < n ;i++)
		{
			cout << ".";
		}
		cout << endl;
		for(int i=0 ; i < n ;i++)
		{
			cout << ".";
		}
		cout << endl;
		int toggle=1;
		for(int j=0 ; j < 2 ; j++)
		{
			r=k/2+1;
			if(j==1) r--;
		 	cout << ".";
		 	for(int i=0 ; i < (n-2) ; i++)
		 	{
	 			
	 			if(r)
	 			{
	 				if(toggle)
	 				{
	 					cout << "#";
	 					r--;
	 				}
	 				else{
	 					cout << ".";
	 				}
	 				toggle ^=1;
	 			}
	 			else{
	 				cout << ".";
	 			}
		 		
		 	}
		 	cout << "."  << endl;
		}
	}
	for(int i=0 ; i < n ;i++)
	{
		
		cout << ".";
	}
	cout << endl;

	return 0;
}
