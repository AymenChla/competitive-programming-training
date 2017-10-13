#include <iostream>
using namespace std;

ifstream cin("input.txt");
ofstream cout("output.txt");

int main()
{
	int a,b;
	cin >> a >> b;
	cout << a+b;
	return 0;
}