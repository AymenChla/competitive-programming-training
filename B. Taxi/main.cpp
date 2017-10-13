#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int opt=0;
    int a[n];
    int cmpt[5] = {0};

    for(int i=0 ; i < n ; i++){
            cin >> a[i];
            cmpt[a[i]]++;
    }

    opt += min(cmpt[3],cmpt[1]);
    cmpt[1] -= min(cmpt[3],cmpt[1]);
    if(cmpt[1]>0)
    {
        opt += max(cmpt[1],cmpt[2]);
        if(cmpt[1] > cmpt[2])
        {
            int r = cmpt[1] - 2*cmpt[2];
            opt += r -ceil(r /4.);
        }
        else {
            cmpt[2] -= min(cmpt[1],cmpt[2]);
            opt += cmpt[2] - ceil(cmpt[2]/2);
        }
   }

    cout << n - opt << endl;

    return 0;
}
