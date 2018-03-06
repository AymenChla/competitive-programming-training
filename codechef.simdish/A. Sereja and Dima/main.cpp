#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    int x=0,y=0,j=0,k=n-1,i=0;
    while(j<=k)
    {
        if(i%2==0){
            if(a[j]>a[k])
            {
                x+=a[j];
                j++;
            }
            else{
                x+=a[k];
                k--;
            }
        }
        else{
            if(a[j]>a[k])
            {
                y+=a[j];
                j++;
            }
            else{
                y+=a[k];
                k--;
            }
        }
        i++;
    }

    cout << x << " " << y << endl;
    return 0;
}