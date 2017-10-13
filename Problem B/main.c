#include <bits/stdc++.h>
using namespace std;



int main() {

    int n;
    vector<int> v;
    cin >> n;
    int val;

    while(n--){
        cin >> val;
        v.push_back(val);
    }

    vector<int> min = v;

    for(int i=0  ; i < min.size()-1 ; i++) {
        for (int j = i + 1; j < min.size(); j++) {
            if (min[i] > min[j]) {
                int tmp = min[i];
                min[i] = min[j];
                min[j] = tmp;
            }
        }

    }


    int i=0;
    while(v.size() != 0)
    {
        if(min[0] == v[0])
        {
           v.erase(v.begin());
            min.erase(min.begin());
        }
    }

    cout << i << endl;

    return 0;
}
