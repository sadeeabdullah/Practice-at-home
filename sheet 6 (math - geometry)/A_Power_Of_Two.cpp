#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    while(n % 2 == 0)
    {
        n /= 2;
    }
    
    if(n == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}