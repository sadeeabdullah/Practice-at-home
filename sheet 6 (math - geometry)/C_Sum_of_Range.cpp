#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;

    
    if (l > r)
    swap(l, r);
    
    int tmp_l = l - 1;
    int tmp_r;
    
    long long sum_all = 1LL * r * (r + 1) / 2 - 1LL * tmp_l * (tmp_l + 1) / 2; // using tmp_l because l is inclusive
    cout << sum_all << endl;

    //getting the summation of  all even number summation
    tmp_l = (l % 2 == 0) ? l : l + 1;
    tmp_r = (r % 2 == 0) ? r : r - 1;

    int numbers = ((tmp_r - tmp_l) / 2) + 1;

    long long sum_even = 1LL * numbers * (tmp_r + tmp_l) / 2;

    cout << sum_even << endl;

    //getting the summation of all even numbers

    tmp_l = (l % 2 != 0) ? l : l + 1;
    tmp_r = (r % 2 != 0) ? r : r - 1;

    numbers = ((tmp_r - tmp_l) / 2) + 1;
    long long sum_odd = 1LL * numbers * (tmp_r + tmp_l) / 2;

    cout << sum_odd << endl;
    return 0;
}