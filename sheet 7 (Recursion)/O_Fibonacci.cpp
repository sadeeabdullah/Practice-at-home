#include <bits/stdc++.h>
using namespace std;

// recursion function to fibonacci number
int fib(int n)
{
     if (n == 1) return 0;
    if (n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;

    int fibonacci = fib(n);
    cout << fibonacci << endl;
    return 0;
}