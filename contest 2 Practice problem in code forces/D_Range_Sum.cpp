#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;

        int minimum = min(l, r);
        int maximum = max(l, r);
        
        long long sum = (1LL * maximum - 1LL * minimum + 1) * ( 1LL * maximum + 1LL * minimum) / 2;
        cout << sum << endl;
    }
    return 0;
}