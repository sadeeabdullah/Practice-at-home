#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int flag = 1;
    if(n <= 1)
    {
        cout << "NO";
        return 0;
    }
    if(n == 2)
    {
        cout << "YES";
        return 0;
    }

    if(n % 2 == 0)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 3; i <= sqrt(n); i+= 2)
    {
        if(n % i == 0)
        {
            flag = 0; 
            break;
        }
    }

    (flag == 1) ? cout << "YES"
                : cout << "NO" << endl;
    
    return 0;
}