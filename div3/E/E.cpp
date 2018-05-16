#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int _max = 2e5+1;


vector<int> v[_max];
vector<int> c;
int visited[_max]={0};

void dfs(int node)
{
	
	visited[node]=1;
	c.emplace_back(node);
	for (int i = 0; i < v[node].size(); ++i)
	{
		if(!visited[v[node][i]])
			dfs(v[node][i]);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 	
	int n,m; cin >> n >> m;
	int a,b;
	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b;
		v[a].emplace_back(b);
		v[b].emplace_back(a);
	}

	int ans=0;
	for (int i = 1; i <= n; ++i)
	{
		
		if(!visited[i])
		{
			c.clear();
			dfs(i);
			int j=0;
			while(j<c.size() && v[c[j]].size()==2) j++;
			if(j==c.size()) ans++;
		}
	}

	cout << ans << endl;
	return 0;
}
