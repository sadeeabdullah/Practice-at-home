#include <bits/stdc++.h>
using namespace std;

int sequence_count(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 1 + sequence_count(n / 2);
    }
    else
    {
        return 1 + sequence_count(3 * n + 1);
    }
}
int main()
{
    int n;
    cin >> n;
    int count = sequence_count(n);
    cout << count << endl;
    return 0;
}