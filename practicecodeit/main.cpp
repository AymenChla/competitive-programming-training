#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   vector<int> a{8,4,3};
   set<int> b;


string s = "bonjour aymen chla";


    int pos = s.find("aymen");
    cout << s.substr(pos) << endl << endl;

   for(auto p:b)
     cout << p << endl;

    return 0;
}
