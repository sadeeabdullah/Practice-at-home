#include <iostream>
using namespace std;

void add(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i != x)
            cout << i << " ";
        else
            cout << i;
    }
}

int main()
{
    int x;
    cin >> x;
    add(x);
    return 0;
}
