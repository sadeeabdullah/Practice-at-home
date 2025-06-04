#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--)
    {
        long long int l, r;
        cin >> l >> r;

        int a = min(l,r);
        int b = max(l,r);
        
        long long sum = (b - a + 1) * (a + b) / 2;

        cout << sum << endl;
        
    }
    return 0;
}