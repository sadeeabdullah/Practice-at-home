#include <bits/stdc++.h>
using namespace std;

void equation(int x, int y)
{
    int sum = 0;
    int power = x * x; // x^2, first even power after 0

    for (int i = 2; i <= y; i += 2)
    {
        sum += power;
        power *= x * x; // next even power: x^4, x^6, ...
    }

    cout << sum << endl;
}
int main()
{
    int x, y;
    cin >> x >> y;
    equation(x, y);
    return 0;
}