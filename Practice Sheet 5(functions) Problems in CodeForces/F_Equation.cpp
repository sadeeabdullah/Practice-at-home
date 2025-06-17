#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int equation(int x, int n) {
    int sum = 0;
    // (X^0 - 1) = (1 - 1) = 0, so ignore adding it explicitly

    for (int i = 2; i <= n; i += 2) {
        sum += power(x, i);
    }

    return sum;
}

int main() {
    int x, n;
    cin >> x >> n;

    cout << equation(x, n) << "\n";

    return 0;
}
