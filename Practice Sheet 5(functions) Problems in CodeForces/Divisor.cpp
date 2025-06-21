#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        int n; 
        cin >> n;

        //taking a vector to store the value of repeating the divisor
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            v.push_back(i);   
        }

        cout<< "Case " << i << ": " ;
        for(int x: v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}