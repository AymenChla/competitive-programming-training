#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <list>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int h,n;cin>>h>>n;
        int h1;
        while(n--){
            h1=h;
            int som=pow(2,h1)-1;
            int q;cin>>q;
            int prec=-1;
            int s=0;
            while(h1>1){
                cout << "h=" << h1 << endl;
                h1--;
                if(q==som){
                    cout << prec +s<<endl;
                    h1=0;
                }
                else{
                    prec=som;
                    som=pow(2,h1)-1;
                    if(q>prec/2){
                        s=s+som;
                        q=q-som;
                    }
                }

                //cout << h << endl;
            }
        }
    }
    return 0;
}