#include <bits/stdc++.h>
using namespace std;

// distinct number count function
int dstnt(int n, vector<int> &a)
{
    // int cnt = 0;
    // sort(a.begin(), a.end()); // time complexity O(N log N);
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i] != a[i + 1])
    //     {
    //         cnt++;
    //     }
    // }
    // return cnt;

    //more optimal? yes here it is: time complexity will be O(N)
    unordered_set<int> s(n);
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]); // it will insert the unique number from the vector a and  ignore the duplicates
    }
    return s.size();
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