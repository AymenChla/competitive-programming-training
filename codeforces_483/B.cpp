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
 	
	int n,m; cin >> n >> m;

	char M[n][m];
	for(int i=0 ; i < n ; i++)
	{
		for(int j=0 ; j < m ;j++)
		{
			cin >> M[i][j];
		}
	}

	for(int i=0 ; i < n ; i++)
	{
		for(int j=0 ; j < m ;j++)
		{
			if(M[i][j]!='*')
			{

				int cnt=0;
				if(i>0 && M[i-1][j] == '*') cnt++;
				if(j>0 && M[i][j-1] == '*') cnt++;
				if(i>0 && j> 0 &&  M[i-1][j-1] == '*') cnt++;
				if(j+1<m && M[i][j+1] == '*') cnt++;
				if(i+1<n && M[i+1][j] == '*') cnt++;
				if(i+1<n && j+1<m && M[i+1][j+1] == '*') cnt++;
				if(i+1<n && j>0 && M[i+1][j-1] == '*') cnt++;
				if(i>0 && j+1<m && M[i-1][j+1] == '*') cnt++;

				cout << i << " " << j << " " <<  cnt << endl;
				if( (cnt > 0 && M[i][j] == '.') || (M[i][j] != '.' && cnt!=M[i][j]-'0') )
				{
					cout << "NO" << endl;
					return 0;
				}
			}


		}
	}

	cout << "YES" << endl;
	return 0;
}
