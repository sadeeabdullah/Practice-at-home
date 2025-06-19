#include <bits/stdc++.h>
using namespace std;

//prime checking function
bool is_prime(int n)
{
    if(n < 2)
    {
        return false;
    }

    if( n == 2)
    {
        return true;
    }else
    {
        int flag = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        return (flag) ? true : false;
    }

    
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