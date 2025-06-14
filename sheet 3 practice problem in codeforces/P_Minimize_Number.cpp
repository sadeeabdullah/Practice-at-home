#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int  i = 0; i < n; i++)
    {
        cin >> a[n];
    }

    int operation = 1;
    int count = 0;
    while(operation == 1)
    {
        for (int i = 0; i < n; i++)
        {

            if(a[i] % 2 != 0)
            {
                operation = 0;
                break;
            }
            else 
            {
                a[i] /= 2;
            }
        }

        if(operation != 1)
        {
            break;
        }
        
        count ++;
    }

    cout << count;
    return 0;
}