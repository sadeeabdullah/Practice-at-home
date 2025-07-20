#include <bits/stdc++.h>
using namespace std;

void shift_zeros(vector<int> &v, int n)
{
    int pos = 0; // we are starting the vector with position zero and only add the  value if it is not zero
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            v[pos++] = v[i];
        }
    }

    //if the position is still smaller than the size of the vector we will set the rest value to 0
    while(pos < n)
    {
        v[pos++] = 0;
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