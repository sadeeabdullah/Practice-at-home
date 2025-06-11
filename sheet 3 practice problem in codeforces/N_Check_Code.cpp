#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    char ch[a + b + 1];

    int flag = 1;

    for (int i = 0; i <= a + b; i++)
    {
        cin >> ch[i];
    }
    if (ch[a] != '-')
    {

        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i <= a + b; i++)
    {
        if(i == a) continue; //skip the hyphen position

        if (!(ch[i] >= '0' && ch[i] <= '9'))
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes";


    return 0;
}