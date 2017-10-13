#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int x,y;
    cin >> x >> y;
    int s_x,s_y;
    char s_d;
    string steps = "";
    vector<vector<int>> history;

    while(scanf("%d%d%c%c",&s_x,&s_y,&s_d,&s_d) != EOF)
    {
        cin >> steps;

        int i=0;
        for(i=0 ; i < steps.length() ; i++)
        {
            if(steps[i] == 'L')
            {
                if(s_d == 'E') s_d = 'N';
                else if(s_d == 'N') s_d = 'W';
                else if(s_d == 'W') s_d = 'S';
                else if(s_d == 'S') s_d = 'E';
            }
            else if(steps[i] == 'R')
            {
                if(s_d == 'E') s_d = 'S';
                else if(s_d == 'S') s_d = 'W';
                else if(s_d == 'W') s_d = 'N';
                else if(s_d == 'N') s_d = 'E';
            }
            else if(steps[i] == 'F')
            {
                for(int j=0 ; j < history.size() ; j++)
                {
                    if(history[j][0] == s_x && history[j][1] == s_y && history[j][2] == s_d)
                    {
                        goto here;
                    }
                }




                if(s_d == 'E') s_x++;
                else if(s_d == 'S') s_y--;
                else if(s_d == 'W') s_x--;
                else if(s_d == 'N') s_y++;

                if(s_x < 0 || s_x > x)
                {

                    cout << (s_x < 0 ? 0 : x) << " " << s_y << " " << s_d << " LOST" << endl;
                    vector<int> a(3);
                    a[0] = (s_x < 0 ? 0 : x);
                    a[1] = s_y;
                    a[2] = s_d;

                    history.push_back(a);

                    break;
                }
                if(s_y < 0 || s_y > y)
                {

                    cout << s_x << " " << (s_y < 0 ? 0 : y) << " " << s_d << " LOST" << endl;
                    vector<int> a(3);
                    a[0] = s_x;
                    a[1] = (s_y < 0 ? 0 : y);
                    a[2] = s_d;

                    history.push_back(a);

                    break;
                }

            }

            here:;
        }

        if( i >= steps.length())
            cout << s_x << " " << s_y << " " << s_d << endl;

    }

    return 0;
}
