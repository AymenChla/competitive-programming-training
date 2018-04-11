#include <iostream>
using namespace std;

int primes[] = {2,3,5,7};
int n=100;

int inc_exe(int i=0,int d=1,int sign = -1)
{
    if(i==4)
    {
      if(d==1) return 0;
      return sign*n/d;
    }
    return inc_exe(i+1,d,sign) + inc_exe(i+1,d*primes[i],sign*-1);
}

int main() {


    int ans=0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2;  ++k) {
                for (int l = 0; l < 2; ++l) {

                    int d=1,cnt=0;
                    if(i) d*=2,cnt++;
                    if(j) d*=3,cnt++;
                    if(k) d*=5,cnt++;
                    if(l) d*=7,cnt++;

                    if(!cnt) continue;

                    int sign = cnt&1 ? 1 : -1;

                    ans += sign*n/d;

                }
            }
        }
    }

    cout << ans << endl;
    cout << inc_exe() << endl;

    return 0;
}