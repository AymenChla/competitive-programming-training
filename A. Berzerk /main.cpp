#include <bits/stdc++.h>

void solve(int n, int k1, const int *s1, int k2, const int *s2);

using namespace std;

int main() {

    int n; cin >> n;
    int k1;
    cin >> k1;
    int s1[k1];
    for (int i = 0; i < k1; ++i) {
        cin >> s1[i];
    }
    int k2;
    cin >> k2;
    int s2[k2];
    for (int j = 0; j < k2; ++j) {
        cin >> s2[j];
    }

    solve(n, k1, s1, k2, s2);
    solve(n, k2, s2, k1, s1);

    return 0;
}

void solve(int n, int k1, const int *s1, int k2, const int *s2) {
    for (int i = 1; i < n; i++) {
        if(any_of(s1,s1+k1,[i,n](int x){
            return ((i+x)%n==0);
        }))
        {
            cout << "Win" << " ";
            continue;
        }
        else{
            for (int j = 0; j < k1; ++j) {
                if(none_of(s2,s2+k2,[i,j,n,&s1,&s2](int y){
                    return (((i+s1[j])%n+y)%n==0);
                }))
                {
                    cout << "Loop" << " ";
                    break;
                }
                if(j==k1-1) cout << "Lose" << " ";
            }

        }
    }
    cout << endl;
}