#include <bits/stdc++.h>
using namespace std;

void shift_zeros(vector<int> &v, int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i > 0; i--)
        {
            if (v[i - 1] == 0)
            {
                swap(v[i - 1], v[i]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    shift_zeros(v, n);

    // printing the 0 shifted vector
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}