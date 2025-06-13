#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        cout << 0;
        return 0;
    }

    if(n == 2)
    {
        cout << 1;
        return 0;
    }

    long long int a = 0, b = 1;
    long long int next ;
    for (int i = 3; i <= n; i++)
    {

        next = a + b;
        a = b;
        b = next;

        
    }

    cout << b;
    return 0;
}