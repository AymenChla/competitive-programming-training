#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

    vector<int> v;


    for(int i=0 ; i< 10;i++)
        v.push_back(rand()%100);

    sort(v.begin(),v.end());
    cout << (* find(v.begin(),v.end(),78)) << endl;
    vector<int>::iterator it = v.begin();
    for(it ; it != v.end() ;it++)
        cout << (*it) << endl;


    return 0;
}
