#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fibo_initial = 0;
    int fibo_secondary = 1;
    for (int i = 1; i <= n; i++)
    {
        
        if(i == 1)
        {
            cout << fibo_initial << " ";
        }
        else if(i == 2)
        {
            cout << fibo_secondary << " ";
        }
        else if(i >= 2)
        {
            int fibo_res = fibo_initial + fibo_secondary;
            cout << fibo_res << " ";
            fibo_initial = fibo_secondary;
            fibo_secondary = fibo_res;
        }
    }
        
    return 0;
}