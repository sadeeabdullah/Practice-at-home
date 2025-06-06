#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // the maximum number of sub arrsy is n*(n+1)/2
        int max_elements[n*(n + 1) / 2];
        int idx = 0;

        for (int i = 0; i < n; i++)
        {
            int current_max = a[i];
            for (int j = i; j < n; j++)
            {
                if(a[j] > current_max)
                {
                    current_max = a[j];
                }
                max_elements[idx++] = current_max;
            }
            
        }

        for (int i = 0; i < idx; i++)
        {
            cout << max_elements[i] << " ";
        }
        
        

        cout << endl;
    }
    return 0;
}