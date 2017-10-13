#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    vector<int> *v;
    cin >> n >> m;

    std::ifstream f(stdin);



    v = (vector<int> *)malloc(sizeof(vector<int>)*n);

    for(int i=0 ;i< n ; i++)
        v[i].push_back(i+1);

    for(int o,l,r; f >> o >> l >> r;)
    {
        if(o == 1)
        {
            int i=0;
            while(i < n ; )
        }
    }


    return 0;
}
