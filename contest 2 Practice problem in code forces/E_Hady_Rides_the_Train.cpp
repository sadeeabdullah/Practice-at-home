#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long column;
    cin >> n;
    long long int row = n / 4;
    (row % 2 == 0) ?
    column = n % 4 
    :
    column = (4 - 1) - (n % 4);

    cout << row << " " << column;
    return 0;
}