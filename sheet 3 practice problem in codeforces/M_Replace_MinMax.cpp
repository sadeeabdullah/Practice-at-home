#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int* min_ptr = min_element(a, a + n);
    int* max_ptr = max_element(a, a + n);

    //get the indices of the minimum and maximum value
    
    int min_idx = min_ptr - a;
    int max_idx = max_ptr - a;

    //swapping the value of the min and min
    swap(a[min_idx],a[max_idx]);
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}