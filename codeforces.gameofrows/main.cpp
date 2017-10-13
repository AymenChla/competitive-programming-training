#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,nbfour,nbtwo,nbfour1=0,nbfour2=0;

    cin >> n >> k;
    nbfour = n*4;
    nbtwo = n*2;

    bool stat = true;
    vector<int> rest;
    int v;

    while(k--)
    {
        cin >> v;
        while(v>=4 && nbfour>0)
        {
            nbfour-=4;
            v-=4;
            //cout << "four: " << 4 << " nbfour: " << nbfour << endl;
        }
        if(v==3 && nbfour > 0){
            v=0;
            nbfour-=4;
            //cout << "four: " << 3 << nbfour << endl;;
        }
        if(v>0) rest.push_back(v);
    }

    for(int i=0; i < rest.size() ;i++)
    {
        //cout << rest[i] << endl;
        if(nbtwo>0)
        {
                while(nbtwo > 0 && rest[i]>0)
                {
                    rest[i]-=2;
                    nbtwo--;
                }
        }
        else if(nbfour > 0)
        {

            while(nbfour > 0 && rest[i]>0)
                {
                    if(rest[i]>=3)
                    {
                        int tmp=rest[i];
                        rest[i]-=tmp;
                        nbfour-=tmp;
                    }
                    else if(rest[i]==2)
                    {
                        if(nbfour >=4)
                        {
                            nbfour-=2;
                            nbfour2++;
                            rest[i]-=2;
                        }else if(nbfour1 >0)
                        {
                            nbfour1--;
                            nbfour-=2;
                            rest[i]-=2;
                        }
                        else if(nbfour2 > 0)
                        {
                             nbfour2--;
                            nbfour-=2;
                            rest[i]-=2;
                        }
                        else{
                            stat=false; break;
                        }

                    }else if(rest[i]==1)
                    {
                        if(nbfour >=4)
                        {
                            nbfour-=1;
                            nbfour1++;
                            rest[i]-=1;
                        }else if(nbfour2 >0)
                        {
                            nbfour2--;
                            nbfour-=1;
                            rest[i]-=1;
                        }
                        else if(nbfour1 >0)
                        {
                            nbfour1--;
                            nbfour-=1;
                            rest[i]-=1;
                        }
                        else{
                            stat=false; break;
                        }

                    }else {
                    stat=false; break;
                    }


                }


        }
        else{
            stat = false;
            break;
        }
    }

    if(stat) cout << "YES";
    else cout << "NO";
    return 0;
}
