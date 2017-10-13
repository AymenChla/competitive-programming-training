#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> direction;
    vector<int> coord;

    int nb;
    char c;
    int x,current,min=-1;

    cin >> nb;

    for(int i = 0 ; i < nb ;i++)
    {
        cin >> c;
        direction.push_back(c);
    }
    for(int i = 0 ; i < nb ;i++)
    {
        cin >> x;
        coord.push_back(x);
    }

    for(int i=0 ; i < nb - 1 ; i++)
    {
        if(direction[i] == 'R' && direction[i+1] == 'L')
        {
            current = (coord[i+1] - coord[i])/2;

            if(min == -1 || min > current)
                min = current;
        }
    }

    cout << min << endl;
    return 0;
}
