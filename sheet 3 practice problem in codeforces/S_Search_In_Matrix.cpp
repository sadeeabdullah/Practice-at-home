#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];
   

    bool x_check = false;
    //taking the 2d array as input
    for(int i = 0; i < n; i++)
    {
        //this will take the column value as input
        for(int j =0; j < m; j++)
        {
            cin >> a[i][j];

        }
    }

    int x;
    cin >> x;


    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < m; j++)
        {
            if(a[i][j] == x)
            {
                x_check = true;
            }
        }
    }

    (x_check) ? cout << "will not take number"
              : cout << "will take number";
    return 0;
}


