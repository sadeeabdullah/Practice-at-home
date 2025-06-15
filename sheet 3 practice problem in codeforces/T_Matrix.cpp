#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];

    int sum_pr_dg = 0;
    int sum_sc_dg = 0;

    //taking the 2d array as input
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(i == j)
            {
                sum_pr_dg += a[i][j];
            }

            if(i + j == n - 1)
            {
                sum_sc_dg += a[i][j];
            }
        }
    }
    
    int abs_diff = abs(sum_pr_dg - sum_sc_dg);
    cout << abs_diff << endl;
    return 0;
}