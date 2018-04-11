#include <bits/stdc++.h>
using namespace std;

int const MAX = 1e6;
typedef struct {
    int h;
    int pos;
} Pos;


Pos _max(Pos a, Pos b)
{
    return (a.h>b.h ? a : b);
}

Pos tree[MAX];
Pos X[MAX];



void build(int node,int start, int end)
{
    if(start == end)
    {

        Pos x = {0,start};
        X[start] = x;
        tree[node] = x;
    }
    else{

        int mid = (start+end)/2;
        build(2*node,start,mid);
        build(2*node,mid+1,end);
        tree[node] = _max(tree[2*node],tree[2*node+1]);
    }

}

void update(int node, int start , int end , int ind, int v)
{
    if(start == end)
    {
        X[ind].h=v;
        tree[node] = X[ind];
    }
    else{
        int mid = (start+end)/2;
        if(ind>=start && ind<=mid)
            update(2*node,start, mid , ind , v);
        else if(ind>mid && ind <= end)
            update(2*node+1,mid+1,end ,ind, v);

        tree[node] = _max(tree[2*node],tree[2*node+1]);
    }
}

Pos query(int node, int start, int end , int l , int r)
{

    if(r<l || r<start || end < l)
        return Pos{0,l};
    if(l<=start && end<=r)
        return tree[node];

    int mid = (start+end)/2;
    Pos a = query(2*node, start , mid, l , r);
    Pos b = query(2*node+1,mid+1,end, l, r);
    return _max(a,b);
}


int main() {

    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int n;
    cin >> n ;

    int l,h,p,c,x;
    int start = MAX;
    int end = 0;


    vector<vector<int>> v(n);
    for(int i=0 ; i < n ; i++)
    {
        cin >> l >> h >> p >> c >> x;
        v[i].emplace_back(l);
        v[i].emplace_back(h);
        v[i].emplace_back(p);
        v[i].emplace_back(c);
        v[i].emplace_back(x);

        if(x<start)
            start = x;
        if(x+l-1>end)
            end = x+l-1;
    }

    build(1,start,end);
    for(int i=0 ; i < n ; i++)
    {
        l = v[i][0];
        h = v[i][1];
        p = v[i][2];
        c = v[i][3];
        x = v[i][4];

        if(c)
        {
            Pos max_p = query(1,start,end,x,x+l-1);
            for(int i=x; i <= x+l-1 ; i++)
            {
                if(i!=x+p-1)
                    update(1,start,end,i,max_p.h+1);
            }
            update(1,start,end,x+p-1,max_p.h+h+1);
            //cout << query(1,start,end,13,13).h << endl;
        }
        else
        {
            Pos max_p = query(1,start,end,x,x+l-1);
            if(max_p.pos == x+p-1)
            {
                for(int i=x; i<=x+l-1 ; i++)
                {
                    update(1,start,end,i,max_p.h+h+1);
                }
            }
            else{

                Pos part1 = query(1,start,end,x,x+p-2);
                Pos part2 = query(1,start,end,x+p-1,x+p-1);
                Pos part3 = query(1,start,end,x+p,x+l-1);
                Pos m1 = _max(part1,part3);
                m1.h+=1;
                part2.h+=h+1;
                m1 = _max(m1,part2);

                for(int i=x; i<=x+p-2 ; i++)
                    update(1,start,end,i,m1.h);

            }
        }
    }

    Pos ans = query(1,start,end,start,end);
    cout << ans.h << endl;
    return 0;
}