/*
 * main.cpp
 *
 *  Created on: 15 août 2017
 *      Author: asus pro
 */


#include <bits/stdc++.h>
using namespace std;

#define MAX 10000;

int main()
{
	string s;
	cin >> s;
	int occu[MAX] = {0};
	int visited[MAX] = {0};

	long long ans=0;
	for(int i=0 ; i < s.length() ; i++)
{

		occu[(int)s[i]%10^5]++;
		cout << (int)s[i]%MAX << occu[(int)s[i]%MAX] << endl;

}

	for(int i=0 ; i < s.length() ; i++){
		if(!visited[(int)s[i]%MAX]){
			visited[(int)s[i]%MAX]=1;
			ans+= (long long )occu[(int)s[i]%MAX] * (long long)occu[(int)s[i]%MAX];
		}
	}

	cout << ans << endl;
	return 0;
}
