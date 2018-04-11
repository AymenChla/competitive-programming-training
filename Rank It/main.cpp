#include <bits/stdc++.h>
using namespace std;

int bs(int a[],int start,int end,int r)
{
    if(start > end)
        return -1;

    int mid = (start+end)/2;
    if(a[mid]==r)
        return mid;

    if(r<a[mid])
        return bs(a,start,mid-1,r);
    else return bs(a,mid+1,end,r);

}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i < n ; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    int q; cin >> q;
    while(q--)
    {
        int s; cin >> s;
        cout << bs(a,0,n,s) +1 << endl;
    }
    
    return 0;
}