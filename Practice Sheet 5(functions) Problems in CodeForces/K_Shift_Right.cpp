#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < x; i++) // this will shift he vector x time
    {
        if (n > 2)
        {
            int last = a[n - 1];
            for (int j = n - 1; j >= 1; j--)
            {
                a[j] = a[j - 1];
            }
            a[0] = last;
        }
        else
        {
            swap(a[0],a[1]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}