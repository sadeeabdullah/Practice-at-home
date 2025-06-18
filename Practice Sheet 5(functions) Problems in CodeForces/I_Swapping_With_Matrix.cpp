#include <bits/stdc++.h>
using namespace std;

//swap function for specific row and column
void swapping(int n,int x, int y, int **a)
{
    for (int i = 0; i < n; i++)
    {
        swap(a[i][x - 1], a[i][y -1]);
    }
    for (int i = 0; i < n; i++)
    {
        swap(a[x -1][i], a[y -1][i]);
    }
}
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n][n];

    //taking the array input
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }


    swapping(n, x, y, a);
    
    return 0;
}