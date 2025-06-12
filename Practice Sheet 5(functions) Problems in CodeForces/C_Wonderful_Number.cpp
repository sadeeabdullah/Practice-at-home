#include <bits/stdc++.h>
using namespace std;

// odd checking function
bool odd_check(int n)
{
    return n % 2 != 0;
}

// binary is palindrome or not
bool is_palindrome(int n)
{

    string binary = ""; // to store binary digits in reverse
    while (n > 0)
    {
        int digit = n % 2;
        binary.push_back(digit + '0'); // pushing back binary digit to string
        n /= 2;
    }

    string not_reversed_binary = binary;
    reverse(binary.begin(), binary.end());

    return not_reversed_binary == binary;
}

int main()
{
    int n;
    cin >> n;
    (is_palindrome(n) && odd_check(n)) ? cout << "YES"
                                       : cout << "NO";
    return 0;
}