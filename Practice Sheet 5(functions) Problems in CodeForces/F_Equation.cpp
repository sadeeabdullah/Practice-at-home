#include <bits/stdc++.h>
using namespace std;

// making function to get the power value
long long int power_value(int i, int x)
{
    long long int multiplication = 1;
    for (int j = 1; j <= i; j++)
    {
        multiplication *= 1LL * x;
    }
    return multiplication;
}
int main()
{
    int x, n;
    cin >> x >> n;
    long long int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        long long int value = power_value(i, x);
        sum += value;
    }

    cout << sum << endl;
    return 0;
}