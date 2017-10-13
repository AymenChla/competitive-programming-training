#include <iostream>

using namespace std;

int main() {
    int n,x,y;
    cin >> n >> x >> y;
    swap(x,y);
    x--;
    y--;
    int mid = n/2;
    if(x == mid && y == mid || x == mid-1 && y == mid || x == mid - 1 && y == mid -1 || x == mid && y == mid -1) printf("NO\n");
    else printf("YES\n");

    return 0;
}