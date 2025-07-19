#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        long long n, s;
        cin >> n >> s;

        vector<long long> result;
        long long remaining = s;

        for (long long i = n; i >= 1; i--) {  // Start from largest
            if (remaining >= i) {
                result.push_back(i);
                remaining -= i;
            }
            if (remaining == 0) break;
        }

        // Additional check: If result has only 1 element, it must equal s
        if (remaining != 0 || (result.size() == 1 && result[0] != s)) {
            cout << -1 << endl;
        } else {
            for (long long val : result) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}