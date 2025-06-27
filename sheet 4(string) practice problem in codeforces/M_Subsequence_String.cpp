#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_set<char> s_uniqe;
    for (int i = 0; i <s.size(); i++)
    {
        s_uniqe.insert(s[i]);
    }
    
    // for (int i = 0; i <s.size(); i++)
    // {
    //     cout << s_uniqe[i]; it will not work because unordered set doesnot support indexing like array or vector
    // }

    for (char c: s_uniqe)
    {
        cout << c;
    }
    
    
    return 0;
}