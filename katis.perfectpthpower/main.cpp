#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

vector<int> vprimes;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          vprimes.push_back(p);
}

int mcd(int a, int b){
    if(a%b==0) return b;
    return mcd(b,a%b);
}


int main()
{

    long long x;
    cin >> x;
    while(x)
    {
        int p,p1,b;
        bool neg= false;
        bool first= true;
        SieveOfEratosthenes(1000000);

        if(x < 0)
        {
            neg= true;
            x=-x;
        }
        for(int i=0 ; i < vprimes.size() ;i++)
        {
            b=x;
            p=0;

            while(b%vprimes[i]==0)
            {
                b /= vprimes[i];
                p++;
            }

            if(first && p!=0){
                p1 = p;
                first =  false;
            }

            if(p!=0 && p1 != 0)
            {

                p1=mcd(p,p1);
            }
        }

        if(neg)
        {
            while(p1%2==0)
                p1/=2;
        }

        cout << p1 << endl;
        cin >> x;
    }


    return 0;
}
