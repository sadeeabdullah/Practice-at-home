#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if(a < b)
        swap(a, b);
    int gcd_ = gcd(a, b);
    int lcm_ = (a * b) / gcd_;
    cout << gcd_ << " " << lcm_ << endl;
    return 0;
}