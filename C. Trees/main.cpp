#include <bits/stdc++.h>
using  namespace std;

const int MAX = pow(2,15);
int tree[2*MAX];


void print(int node,int k)
{
    if(node>k) return;

    cout << tree[node];
    if(node<k) cout << " ";
    print(2*node,k);
    print(2*node+1,k);
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;

        if(n==1) {
            cout << 1 << endl;
            continue;
        }
        priority_queue<pair<int,int>> q;

        int k = pow(2,n)-1;
        int v = (k*(k+1))/2;
        q.emplace(v,1);

        int next,count=0;
        while(!q.empty())
        {
            pair<int,int> father = q.top();
            q.pop();

            if(count==0)
            {
                next = father.first/2;
                count = pow(2,(int)log2(father.second)+1);
            }

            pair<int,int> right;
            right.second = 2*father.second+1;
            right.first = next;

            pair<int,int> left;
            left.second = 2*father.second;
            left.first = next - pow(2,(int)log2(father.second));

            next--;
            count-=2;

            tree[father.second] = father.first  - right.first - left.first;
            if(right.first>k)
            {
                q.emplace(right);
                q.emplace(left);
            }
            else{
                tree[right.second] = right.first;
                tree[left.second] = left.first;
            }

        }


        print(1,k);
        cout << endl;
    }

    return 0;
}