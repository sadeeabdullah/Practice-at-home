#include <bits/stdc++.h>
using namespace std;

// distinct number count function
int dstnt(int n, vector<int> &a)
{
    int cnt = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if(a[i] != a[i + 1])
        {
            cnt++;
        }
    }
    return cnt;
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
    cout << dstnt(n, a) << endl;
    return 0;
}