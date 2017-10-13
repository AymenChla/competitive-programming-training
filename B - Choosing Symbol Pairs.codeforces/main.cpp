/*
 * main.cpp
 *
 *  Created on: 15 août 2017
 *      Author: asus pro
 */


#include <bits/stdc++.h>
using namespace std;

#define MAX 256

int main()
{
	string s;
	cin >> s;
	int occu[MAX] = {0};


	long long ans=0;
	for(int i=0 ; i < s.length() ; i++)
		occu[(int)s[i]]++;

	for(int i=0 ; i < MAX ; i++){
			ans+= (long long )occu[i] * (long long)occu[i];
	}

	cout << ans << endl;
	return 0;
}
