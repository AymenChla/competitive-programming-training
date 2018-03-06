#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    string x,y;
    cin >> x >> y;

    int lx = x.length();
    int ly = y.length();
    int end = max(lx,ly);

    int res=0;
    for(int i=0; i < end ; i++)
    {
        if(x[i%lx] != y[i%ly])
        {
            res++;
        }
    }
    abcde|abcde|abcde  5
    azcaz|cazca|zcazc  3

    abcde|abcde  5
    azaza|zazaz  2

    abc|abc 3
    zez|eze 2

    abcdef 6
    zezeze 2

    abcdef|abcdef 6
    azcgaz[cgazcg  4

    abcdefghijkl|abcdefghijkl|abcdefghijkl 12
    abcdefijkabc|defijkabcdef|ijkabcdefijk 9

    abcdef|abcdef|abcdef|abcdef|abcdef 6
    abcdea|bcdeab|cdeabc|deabcd|eabcde 5

    abcdefij|abcdefij|abcdefij|abcdefij|abcdefij 8
    azcmnazc|mnazcmna|zcmnazcm|nazcmnaz|cmnazcmn 5
    cout << min(n,m)*res << endl;

    return 0;
}