#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int nbcases;
    int cmpt;
    string dish;
    set<string> dish1;
    set<string> dish2;
    cin >> nbcases;

    while(nbcases--)
    {

        for(int i=0 ; i < 4 ; i++)
        {
            cin >> dish;
            dish1.insert(dish);
        }

        for(int i=0 ; i < 4 ; i++)
        {
            cin >> dish;
            dish2.insert(dish);
        }



        cmpt=0;
        set<string>::iterator it1 = dish1.begin(), it2;
        while(cmpt<2 && it1 != dish1.end())
        {
            it2 = dish2.begin();
            while(it2!= dish2.end() && *it1 != *it2)
                it2++;
            if(it2 != dish2.end())
                cmpt++;

            it1++;

        }




        if(cmpt>=2)
            cout << "similar" << endl;
        else cout << "dissimilar" << endl;

        dish1.clear();
        dish2.clear();
    }
    return 0;
}
