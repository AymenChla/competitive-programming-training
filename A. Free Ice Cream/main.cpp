    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int n;
        long long s=0;
        cin >> n >> s;
        int d=0;
        while(n--)
        {
            char o;
            int a;
            cin >> o >> a;
            if(o=='+') s+=a;
            else{
                if(a<=s) s-=a;
                else d++;
            }
        }
        cout << s << " " << d << endl;
        return 0;
    }