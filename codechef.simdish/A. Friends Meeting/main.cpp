#include <iostream>
using namespace std;

int main() {

    int a,b;
    cin >> a >> b;

    int x=min(a,b);
    int y=max(a,b);
    int i=1,j=1,k=0,res=0;
    while(x!=y)
    {
        if(k%2==0)
        {
            x++;
            res+=i;
            i++;
        }
        else{
            y--;
            res+=j;
            j++;
        }
        k++;
    }

    cout << res << endl;
    return 0;
}