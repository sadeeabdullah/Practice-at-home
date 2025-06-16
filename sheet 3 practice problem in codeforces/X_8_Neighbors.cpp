#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    //taking the input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    int x, y;
    cin >> x >> y;

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if(flag == 0)
        {
            break;
        }
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] != arr[x - 1][y - 1])
            {
                if(arr[i][j] != 'x')
                {
                    flag = 0; 
                    break;
                }
            }
        }
        
    }

    (flag) ? cout << "yes"
           :  cout << "no";
  
    return 0;
}