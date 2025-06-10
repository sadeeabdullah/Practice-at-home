#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maximum = INT_MIN;

    for (int i = 0; i <n; i++)
    {
        int count = 0;
        long long int x;
        cin >> x;

        

        while(x % 2 == 0)
        {
            x /= 2;
            count ++;
        }
        
        // cout << count << " " << endl;  
        if(count > maximum)
        {
            maximum = count;
        }
    }

    cout << maximum;
    
    
    return 0;
}