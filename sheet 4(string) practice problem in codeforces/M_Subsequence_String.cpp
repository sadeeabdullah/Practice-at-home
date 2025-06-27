#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int size = s.size();
    // for (int i = 0; i <size; i++)      // starting index
    // {
    //     for (int j = i; j < size; j++) // ending index
    //     {
    //         for(int k = i; k <= j; k++)
    //         {
    //             cout << s[k];
    //         }
    //         cout << endl;
    //     }

    // }

    string target = "hello";
    int i = 0, j = 0;

    while (i < size && j < 5)
    {
        if(s[i] == target[j])
        {
            j++; //match found ? move to next in "hello"
        }
        i++; // always move next in s
    }
    
    if(j == target.size())
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
        return 0;
}