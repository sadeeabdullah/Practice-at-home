#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;

    int tmp_l = l - 1;

    if (l > r)
        swap(l, r);
    long long sum_all = ((r / 2) * (r + 1)) - ((tmp_l / 2) - (tmp_l + 1)); // using tmp_l because l is inclusive
    cout << sum_all << endl;
    return 0;
}