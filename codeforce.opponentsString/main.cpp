#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n,d,max=0,current=0;
    char temp;

    string pres;

    cin >> n >> d;

    for(int i=0 ; i < d; i++)
    {
        cin >> pres;

        if(pres.find('0') != string::npos)
        {

            current++;
            if(current > max ) max = current;
        }
        else current=0;


    }

    cout << max;

    return 0;
}
