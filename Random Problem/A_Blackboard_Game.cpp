#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        if(n % 4 == 0)
        {
            cout << "Bob" << endl;
        }
        else 
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}