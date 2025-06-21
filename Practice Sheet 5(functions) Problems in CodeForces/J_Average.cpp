#include <bits/stdc++.h>
using namespace std;

//function to get the average 
double avg(int n)
{
    
    vector<double> a(n);
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    
    double average = sum / n;
    return average;
}
int main()
{
    int n;
    cin >> n;
    
    double average = avg(n);
    cout << fixed << setprecision(7) << average << endl;

    return 0;
}