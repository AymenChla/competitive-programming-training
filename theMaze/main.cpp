#include <iostream>

using namespace std;
int nb=0;
int r,c;
char maze[100][100];
bool visited[100][100];

void nbPossibilitie(int x , int y , int r, int c)
{
    if(x >=0 && x < r && y >=0 && y < c && !visited[x][y] && maze[x][y] != 'x')
    {
        nb++;
        visited[x][y] = true;

        nbPossibilitie(x-1,y,r,c);
        nbPossibilitie(x+1,y,r,c);
        nbPossibilitie(x,y-1,r,c);
        nbPossibilitie(x,y+1,r,c);
    }

}


int main()
{

    int x,y;

    cin >> x >> y;
    cin >> r >> c;
    for(int i=0 ; i < r ; i++)
        for(int j=0 ; j < c ; j++)
            cin >> maze[i][j];


    nbPossibilitie(x,y,r,c);
    cout << nb;

    return 0;
}
