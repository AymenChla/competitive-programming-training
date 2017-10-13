#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {


    string s;
    cin >> s;
    vector<char> vc(s.length()/2+1);

    int j=0;
    for(int i=0 ; i < vc.size() ; i++)
    {
        vc[i] = s[j];
        j+=2;
    }

    sort(vc.begin(),vc.end());
    for(int i=0 ; i < vc.size()-1 ;i++)
    {
            cout << vc[i] << "+";
    }
    cout << vc[vc.size()-1] << endl;

    return 0;
}