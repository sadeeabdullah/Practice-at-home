#include <bits/stdc++.h>
using namespace std;

int max_(vector<int> &v, int n)
{
    int maxi_ = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxi_)
            maxi_ = v[i];
    }
    return maxi_;
}

int min_(vector<int> &v, int n)
{
    int min_ = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < min_)
            min_ = v[i];
    }
    return min_;
}

int primeNumberCount(vector<int> &v, int n)
{
    int prime_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= 1)
        {
            continue;
        }
        else if (v[i] == 2)
        {
            prime_count++;
        }
        else if (v[i] % 2 != 0)
        {
            int isPrime = 1;
            for (int j = 2; j <= sqrt(v[i]); j++)
            {
                if (v[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1)
            {
                prime_count++;
            }
        }
    }
    return prime_count;
}

bool is_palindrome(int num)
{
    int original = num;
    int reversed = 0;

    // Handle negative numbers as non-palindromes
    if (num < 0)
        return false;

    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int palindrome_numbers(vector<int> &v, int n)
{
    int palindromeCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_palindrome(v[i]))
        {
            palindromeCount++;
        }
    }
    return palindromeCount;
}
int count_divisors(int num)
{
    if (num == 0)
        return 0;

    int count = 0;
    int sq = sqrt(num);

    for (int i = 1; i <= sq; i++)
    {
        if (num % i == 0)
        {
            if (i == num / i)
                count++;  // Perfect square
            else
                count += 2;  // Pair of divisors
        }
    }
    return count;
}

int max_divisor_num(vector<int> &v, int n)
{
    int max_div = -1;
    int max_div_num = -1;

    for (int i = 0; i < n; i++)
    {
        int div_count = count_divisors(v[i]);

        if (div_count > max_div || (div_count == max_div && v[i] > max_div_num))
        {
            max_div = div_count;
            max_div_num = v[i];
        }
    }

    return max_div_num;
}



int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "The maximum number : " << max_(v, n) << endl;
    cout << "The minimum number : " << min_(v, n) << endl;
    cout << "The number of prime numbers : " << primeNumberCount(v, n) << endl;
    cout << "The number of palindrome numbers : " << palindrome_numbers(v, n) << endl;
    cout << "The number that has the maximum number of divisors : " << max_divisor_num(v, n) << endl;

    return 0;
}