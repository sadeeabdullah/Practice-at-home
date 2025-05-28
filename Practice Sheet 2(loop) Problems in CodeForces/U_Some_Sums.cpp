#include <bits/stdc++.h>
using namespace std;

int digitCount(int n){
    int sum_of_dg = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum_of_dg += digit;
        n /= 10;
    }
    
    return sum_of_dg;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int sum_of_num = 0;

    for (int i = 1; i <= n; i++)
    {

       if(digitCount(i) >= a && digitCount(i) <= b){
        sum_of_num += i;
       }
       
        
    }
    
    cout << sum_of_num << endl;
    return 0;
}