#include <bits/stdc++.h>

// creating a function to check if index is prime or not
bool IsPrime(int i)
{
    if (i == 1)
        return false;
    else if (i == 2)
    {
        return true;
    }
    else if (i % 2 == 0)
    {
        return false;
    }
    else if (i > 2)
    {
        for (int j = 3; j <= sqrt(i); j += 2)
        {
            if (i % j == 0)
            {
                return false;
            }
        }
    }
    return true;
}

using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();

    // lets create a for loop to check the 1 to n prime number
    for (int i = 1; i <= len; i++) // 
    {
        if(!IsPrime(i))
        {
            cout << s[i-1];
        }
    }

    return 0;
}