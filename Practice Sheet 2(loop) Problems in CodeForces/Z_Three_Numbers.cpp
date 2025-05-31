#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;

    int count = 0;
    
        for (int i = 0; i <= k; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                int l = s - j - i;
                if( l >= 0 && l <= k)
                {
                    count ++;
                }
            }
        }
    

    cout << count;
    return 0;
}