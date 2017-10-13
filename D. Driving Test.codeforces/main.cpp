#include <iostream>

using namespace std;

int main()
{
    int r[7] = {0};
    int vl=0,nbf=0,v=0,s=0,lvl=0;
    int n; cin >> n;
    vector<int> vitesse;
    for(int i=0 ; i < n ; i++)
    {
        cin >> s;
        switch(s)
        {

            case 1:
                cin >> v;
                if(r[3] > 0 && v > vl)
                {
                    nbf+=r[3];
                    r[3] = 0;
                }
            break;
            case 2:
                if(r[6] > 0 ) nbf += r[6];
                r[6] = 0;
            break;
            case 3:
                //lvl=vl;
                cin >> vl;
                if(vl>=v)
                {
                    r[3]++;
                    vitesse.push_back(vl);
                }
                else
                {
                    nbf++;
                    r[3]=0;
                }
            break;
            case 4:
                r[6]=0;
            break;
            case 5:
                r[3]=0;
                vitesse.clear();
            break;
            case 6:
                r[6]++;
            break;
        }


    }

    cout << nbf << endl;

    return 0;
}
