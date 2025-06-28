#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = 0;
    int count = 0;
    while(i < s.length()) // its mean the iterator for the string will iterate for the size of given string or size time
    {
        if(s[i] != s[i + 1])
        {
            count ++;
        }
        i++;
    }

    cout << count;
    return 0;
}