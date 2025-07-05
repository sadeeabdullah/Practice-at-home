#include <bits/stdc++.h>
using namespace std;

void print_star(int n, int star, int space)
{
    if(n < 1) return;

    print_star(n - 1, star + 2, space - 1);
    //space print
    for (int i = 0; i < space; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < star; i++)
    {
        cout << "*";
    }
    cout << endl;
    
    
    
}
int main()
{
    int n;
    cin >> n;
    int star;
    int space;
    space = n - 1;
    star = 1;
    print_star(n,star,space);
    return 0;
}