#include <iostream>

using namespace std;

int main()
{
    int n,h;

    cin >> n >> h;

    int v,width=0;

    for(int i=0 ; i < n ; i++)
    {
        cin >> v;
        if(v>h) width+=2;
        else width++;
    }
    cout << width << endl;
    return 0;

}
