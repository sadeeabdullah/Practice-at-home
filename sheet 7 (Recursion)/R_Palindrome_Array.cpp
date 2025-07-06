#include <bits/stdc++.h>
using namespace std;

// checking palindrome array or not
string checkPalindrome(vector<int> &a, int i, int j)
{
    // here is the base case
    if (i >= j)
    {
        return "YES";
    }
    if (a[j] != a[i])
    {
        return "NO";
    }

    // recursive call
    return checkPalindrome(a, i + 1, j - 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << checkPalindrome(a, 0, n - 1) << endl;
    return 0;
}