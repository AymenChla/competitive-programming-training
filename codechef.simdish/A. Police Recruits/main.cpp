#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int h=0,u=0;
    while(n--)
    {
        int a;
        cin >> a;
        if(a!=-1) h+=a;
        else{
            if(h!=0){
                h--;
            }
            else{
                u++;
            }
        }
    }
    cout << u << endl;
    return 0;
}