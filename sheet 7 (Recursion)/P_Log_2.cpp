#include <bits/stdc++.h>
using namespace std;
long long get_log(int n)
{
    long long res = 0;
    if(n == 1)
    {
        return 0;
    }
    return 1 + get_log(n / 2);
}
int main()
{
    long long n;
    cin >> n;
    cout << get_log(n) << endl;
    return 0;
}