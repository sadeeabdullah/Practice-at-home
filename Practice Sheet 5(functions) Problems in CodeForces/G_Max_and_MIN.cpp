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

    int *minimum_idx = min_element(a, a+n);
    int *maximum_idx = max_element(a, a+n);
    cout <<  *minimum_idx << " " << *maximum_idx;
    
    return 0;
}