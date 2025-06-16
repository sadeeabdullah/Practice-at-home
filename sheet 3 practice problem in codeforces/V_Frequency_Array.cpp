#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    //taking frequency array as the size of m
    int freq[100000] ={0}; // set 0 to every value in frequency array
    for (int i = 0; i <n; i++)
    {
        freq[a[i]]++;
    }

    //showing the count of number repeating in array a using frequency array
    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << endl;
    }
    
    
    return 0;
}