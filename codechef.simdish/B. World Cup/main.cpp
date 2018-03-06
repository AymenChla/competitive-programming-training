#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;

    int v[n+1];

    int tmp = a;
    a = min(a,b);
    b = max(tmp,b);
    int final = log2(n);
    int round = 0;
    int cont=1;
    do {
        round++;
        for (int j = 1; j <= n; j++) {
            v[j] = j;
        }

        for (int i = 1; i <= n; i += 2) {
            if (v[i] == a && v[i + 1] == b) {
                cont = 0;
                break;
            }
        }
        a = ceil(a/2.);
        b = ceil(b/2.);
        n /= 2;
    }while(cont);

    if(round == final)
        cout << "Final!" << endl;
    else
      cout << round << endl;
    return 0;
}