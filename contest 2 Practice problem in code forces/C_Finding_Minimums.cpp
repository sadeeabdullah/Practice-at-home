#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // while loop to get the consecutive groups keeping it true and break the loop when the i >= n;

    int i = 0;
    int dup_k = k;
    while (1)
    {
        if (i >= n)
        {
            break;
        }

        int minimum = INT_MAX;
        

            while (i < dup_k && i < n)
        {
            minimum = min(minimum, arr[i]);
            i++;
        }

        dup_k += k; // increase k to next consecutive

        //cout minimum of the first consecutive
        cout << minimum  << " ";

        //after printing the minimum of the first consecutive lets reassign the minimum as int mx
        minimum = INT_MAX;
    }

    return 0;
}