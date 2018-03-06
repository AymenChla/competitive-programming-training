#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int v[601]={0};
    int s=0;
    for(int i=0; i <n ; i++)
    {
        int a;
        cin >> a;
        if(!v[a] && a!=0){
            s++;
            v[a]=1;
        }
    }
    cout << s << endl;
    return 0;
}