#include <iostream>
#include <string>
using namespace std;

int nboccu(string s,string sub)
{
    for(int i=0 ; i < s.length() ; i+sub.length())
        i++;
}

int main()
{
    string s,sub;
    int j;
    int sol;
    cin >> s;
    while(s != "."){




        sub.append(s.substr(0,1));
        sol=0;
        for(int i=1 ; i < s.length() ; i++)
        {
            if(s[i] != s[0] )
            {
                string temp = sub;
                for(int l=0 ; l < sol ; l++)
                {
                    sub.append(temp);
                }


                sub.append(s.substr(i,1));
            }
            else if( (i ==s.length()-1 && sub.length()>1) || (i < s.length()-1  && s[1] != s[i+1] ))
            {

                sub.append(s.substr(i,1));
            }
            else
            {
                j=0;
                int k=i;
                //boucle pour verifier si la ss chaine suivante est differente de la premiere ou pas
                while(j < sub.length()-1 && i != s.length() - 1 && s[i+1] == sub[j+1])
                {
                    i++;
                    j++;
                }

                if(j < sub.length() - 1)
                    sub.append(s.substr(k,j));

                else sol++;
            }



        }

        if(s.length() == sub.length())
            cout << 1 << endl;
        else
        {

            cout << sol + 1 << endl;
        }


        cin >> s;
        sub.clear();
    }
    return 0;
}
