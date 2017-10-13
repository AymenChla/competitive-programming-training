#include <iostream>
using namespace std;


int main()
{

    int n,maxDepth=0;

    cin >> n;
    int nodes[n+1];
    for(int i=1 ; i <= n ; i++)
        cin >> nodes[i];

    for(int i=1 ; i <= n ; i++)
    {
        int depth=1,k=i;
        for( ; nodes[k] != -1 ; k = nodes[k] , depth++);
        maxDepth = depth > maxDepth ? depth : maxDepth;
    }

    cout << maxDepth;
return 0;
}
