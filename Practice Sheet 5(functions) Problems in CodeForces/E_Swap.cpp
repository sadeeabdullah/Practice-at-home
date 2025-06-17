#include <bits/stdc++.h>
using namespace std;

void swapping(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
    cout << x <<" " << y << endl;
}
int main()
{
    int x, y;
    cin >> x >> y;
    swapping(x,y);
    return 0;
}