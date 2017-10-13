#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int a[6];
    for(int i=0 ; i < 6 ; i++) a[i] = s[i] - '0';
    int s1=0,s2=0;
    s1 = a[0] + a[1] + a[2];
    s2 = a[3] + a[4] + a[5];
    int dif,cmp1=0,cmp2=0,cmp3=0,cmp4=0;
    if(s1 < s2)
    {
        sort(a,a+3);
        sort(a+3,a+6,greater<int>());
        dif = s2 -s1;
        //sur s1
        for(int i=0 ; dif > 0 ; i++)
        {
            cmp1++;
            dif -= (9 - a[i]);
        }
        dif = s2 -s1;
        //sur s2
        for(int i=3 ; dif > 0 ; i++)
        {
            cmp2++;
            dif -= a[i];
        }

        dif = s2 -s1;
        //sur s2,s1
        for(int i=0 ; dif > 0 ; i++)
        {

            if(dif > 0)
            {
                dif -= (9 - a[i]);
                cmp3++;

            }
            if(dif > 0)
            {

                dif -= a[i+3];
                cmp3++;
            }
        }

        dif = s2 -s1;
        //other
        for(int i=0 ; dif > 0 ; i++)
        {


            if(dif > 0)
            {

                dif -= a[i+3];
                cmp4++;
            }
             if(dif > 0)
            {
                dif -= (9 - a[i]);
                cmp4++;

            }
        }
    }else if(s1 > s2)
    {
        sort(a,a+3,greater<int>());
        sort(a+3,a+6);
        dif = s1 -s2;
        //sur s1
        for(int i=0 ; dif > 0 ; i++)
        {
            cmp1++;
            dif -= a[i];
        }
        dif = s1 -s2;
        //sur s2
        for(int i=3 ; dif > 0 ; i++)
        {
            cmp2++;
            dif -= (9 - a[i]);
        }

        dif = s1 -s2;
        //sur s2,s1
        for(int i=0 ; dif > 0 ; i++)
        {
            if(dif > 0)
            {
                dif -= (a[i]);
                cmp3++;

            }
            if(dif > 0)
            {

                dif -= (9 - a[i+3]);
                cmp3++;
            }
        }
        dif = s1 -s2;
        //other
        for(int i=0 ; dif > 0 ; i++)
        {


            if(dif > 0)
            {

                dif -= (9 - a[i+3]);
                cmp4++;
            }
             if(dif > 0)
            {
                dif -= (a[i]);
                cmp4++;

            }
        }
    }
    else{
      cout << 0 << endl;
      return 0;
    }

    cout << min(cmp1,min(cmp2,min(cmp3,cmp4))) << endl;
    return 0;
}
