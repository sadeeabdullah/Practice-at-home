#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        
        long long int sum = 0;

        for(int i = l ; i <= r; i++)
        {
            sum += i;
        }

        cout << sum << endl;
        
    }
    return 0;
}