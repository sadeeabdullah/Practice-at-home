#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < s.size() - 2; i++)
        {
            string tmp ;
            tmp += s[i] ;
            tmp += s[i + 1] ;
            tmp += s[i + 2];

            if (tmp == "101" || tmp == "010")
            {
                flag = 1;
                break;
            }
        }

        (flag == 0) ? cout << "Bad" << endl
                    : cout << "Good" << endl;
    }
    return 0;
}