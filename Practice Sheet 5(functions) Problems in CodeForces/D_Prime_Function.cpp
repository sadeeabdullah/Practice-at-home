#include <bits/stdc++.h>
using namespace std;

//prime checking function
bool is_prime(int n)
{
    if(n < 2)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    if(n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) //sqrt returns float value;
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
    
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        (is_prime(n)) ? cout << "YES" << endl
                      : cout << "NO" << endl;
    }
    return 0;
}