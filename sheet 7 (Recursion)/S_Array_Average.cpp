#include <bits/stdc++.h>
using namespace std;
long long get_sum(int n, vector<int> &a)
{
    // base case here
    if (n == 0)
    {
        return 0;
    }

    return get_sum(n - 1, a) + a[n - 1];
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = get_sum(n, a);
    double avg =(double) sum / n;
    cout << fixed << setprecision(6) << avg << endl;
    return 0;
}