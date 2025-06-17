#include <bits/stdc++.h>
using namespace std;

void prnt(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(i != n)
        cout << i << " ";
        else
        cout << i;
    }
    
}

int main()
{
    int n;
    cin >> n;
    prnt(n);
    return 0;
}