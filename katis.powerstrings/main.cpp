#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    string occ;
    int sol;
    bool trouve=false;
    do{
        cin >> s;



        for(int i=0,j=1,k ; i < s.length() && !trouve ; i++ ,j++)
        {

           occ.append(s.substr(i,1));
           k=i;
           sol=1;
           while(k < s.length() -1 && occ == s.substr(k+1,j))
           {
               k+=j;
               sol++;
           }

            if(k >= s.length() - 1)
            {
                cout << j << endl;

                 trouve=true;
            }
            else {
                    sol=1;
                    cout << j << endl;


            }
            occ.append(s.substr(i+1,1));
                    cout << occ << " :" <<endl;
        }


        cout << sol << endl;
    }while(s != ".");
    return 0;
}
