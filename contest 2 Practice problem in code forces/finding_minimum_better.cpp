#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >>  n >> k;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // lets take a for loop
    for (int i = 0; i < n; i += k)
    {
        int minimum = INT_MAX;
        for (int j = i; j < i + k && j < n; j++)
        {
            minimum = min(minimum, arr[j]);
        }

        cout << minimum << " ";
        
    }
    
    return 0;
}