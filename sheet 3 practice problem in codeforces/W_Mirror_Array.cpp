#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    //taking the input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    //printing the array
    for (int i = 0; i < n; i++)
    {
        for(int j = 0, k = m - 1; j < k; j++, k--)
        {
            // cout << arr[i][j] << " ";
            swap(arr[i][j], arr[i][k]);

        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    
    
    return 0;
}