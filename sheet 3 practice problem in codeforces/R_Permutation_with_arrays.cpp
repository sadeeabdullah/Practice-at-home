#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    bool permutation_chk = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            permutation_chk = false;
            break;
        }
    }

    (permutation_chk) ? cout << "yes"
                      : cout << "no";

    return 0;
}