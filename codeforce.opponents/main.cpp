#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,d,max=0,current=0;
    char temp;

    vector<char> pres;

    cin >> n >> d;


    for(int i=0 ; i < d; i++)
    {
        for(int j=0 ; j < n ;j++)
        {
            cin >> temp;
            pres.push_back(temp);
        }

        if(find(pres.begin(),pres.end(),'0') != pres.end())
        {

            current++;
            if(current > max ) max = current;
        }
        else current=0;

        pres.clear();
    }

    cout << max;

    return 0;
}
