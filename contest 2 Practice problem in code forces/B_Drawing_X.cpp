#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int backslash = 0, forwardslash = n - 1;

    // for printing the line
    for (int i = 0; i < n; i++)
    {
    
        // for printing the star and slash
        for (int j = 0; j < n; j++)
        {
            if(j == backslash  && j == forwardslash)
            {
                cout << "X";
            }
            else if(j == backslash){
                cout << "\\";
            }
            else if (j == forwardslash)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
       
        backslash++;
        forwardslash--;
        

    }

    return 0;
}