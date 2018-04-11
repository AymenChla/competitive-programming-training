#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    for(int i=1 ; i <= t ; i++) {
        int n;
        cin >> n;
        int na, nb;
        if (n%2) {
            na = n / 2 + 1;
            nb = n / 2;
        } else {
            nb = na = n / 2;
        }

        int a[na];
        int b[nb];
        for (int i = 0, j = 0, k = 0; i < n; i++) {
            if (i%2)
                cin >> b[j], j++;
            else cin >> a[k], k++;
        }

        sort(a, a + na);
        sort(b, b + nb);

        int r[n];
        for (int i = 0, j = 0, k = 0; i < n; i++) {
            if (i%2)
                r[i] = b[j], j++;
            else r[i] = a[k], k++;
        }

        bool ok = false;
        for (int l = 0; l < n-1; ++l) {
           if(r[l]>r[l+1])
           {
               cout << "Case #" << i << ": " << l << endl;
               ok=true;
               break;

           }
        }
        if(!ok)
        cout << "Case #" << i << ": OK" << endl;
    }
    return 0;
}