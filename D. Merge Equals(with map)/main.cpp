#include <bits/stdc++.h>

using namespace std;

int comb(long long N, long long K,string s)
{
    string str="";
    long long len =s.length(),len1=-1;
    string bitmask(K, 1);
    bitmask.resize(N, 0);
    do {
        str="";
        for (int i = 0; i < N; ++i) // [0..N-1] integers

        {
            if (bitmask[i]) {str+=s[i];};
        }
        if(str[0]=='0')
            continue;

        if((long long)sqrt(stof(str))*(long long)sqrt(stof(str))==stod(str)){
            len1=to_string(stoll(str)).length();
            // cout << len1<<" "<<to_string(stoi(str))<<" "<<sqrt(stoi(str))<<endl;
            cout<<len-len1;return 0;

        };

    } while (prev_permutation(bitmask.begin(), bitmask.end()) && len1==-1);
    return 1;
}

int main()

{
    string s;cin>>s;
    for(long long i=s.length();i>0;i--)
    {
        if (comb(s.length(), i,s)==0){
            return 0;

        }


    }
    cout<<-1;
    return 0;
}