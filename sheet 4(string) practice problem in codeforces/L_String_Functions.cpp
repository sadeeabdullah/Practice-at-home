

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, query;
    cin >> n >> query;

    string s;
    cin >> s;

    int l, r, pos;

    char x;

    while (query--)
    {
        string op;
        cin >> op;

        if (op == "pop_back")
        {
            s.pop_back();
        }
        else if (op == "front")
        {
            cout << s.front() << endl;
        }
        else if (op == "back")
        {
            cout << s.back() << endl;
        }
        else if (op == "sort")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (op == "reverse")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (op == "substr")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (op == "print")
        {
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if (op == "push_back")
        {
            cin >> x;
            s.push_back(x);
        }
    }
    return 0;
}