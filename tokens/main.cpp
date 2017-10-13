#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
        int m,n,t;
        string c;
        string token;
        vector<char> token2,token1;
        cin >> t;

        while(t--)
        {
            cin >> m >> c >> n;
            int res=0;
            while(n--)
            {
                cin >> token;
                int j=0;


                while(j < token.length() && token[j] != '-')
                    {
                        token1.push_back(token[j++]);

                    }


                j++;
                while(j < token.length() && token[j] != '-')

                    {
                        token2.push_back(token[j++]);
                    }


                int i=0;
                while(i < c.length() && c[i] == token1[i])
                {
                        i++;
                }
                if(i == c.length())
                {
                    if(token2.size() == m)
                        {

                            res++;
                        }
                }

                token1.clear();
                token2.clear();

            }

            cout << res << endl;
        }

    return 0;
}



