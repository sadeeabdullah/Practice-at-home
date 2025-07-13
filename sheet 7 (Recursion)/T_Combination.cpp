// as we know the formula for combination is n!/(r!*(n -r)!)
#include <bits/stdc++.h>
using namespace std;

long long combination(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main()
{
    int n, r;
    cin >> n >> r;
    long long cmb = combination(n, r);
    cout << cmb << endl;
    return 0;
}