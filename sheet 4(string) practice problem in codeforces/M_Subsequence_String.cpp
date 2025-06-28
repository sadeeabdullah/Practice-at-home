#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int size = s.size();

    
    // we are looking for hello string is  possible with any of the subsequence or not
    // so what we need to  do is we will check a iterator goes to end of hello or not while the condition will be the iterator of the targeted(hello) string iterator goes to end or not if it goes then it is possible here we have no need to add or show the subsequences

    string target = "hello";
    // first setting the iterator for targeted string as "i" and the given string iterator to "j"
    int i = 0, j = 0;
    while(j < size && i < 5) // its mean the iterator for the string will iterate for the size of given string or size time
    {
        // now we will write a condition that the iterator of targeted string will increase if the it finds the character sequencially
        if(target[i] == s[j])
        {
            i++;
        }
        j++; // it will increase the iterator in every iteration
    }


    // now we will check if the iterator targeted string goes to the end or not. If it goes then the sub sequence string is possible
    cout << (((i == target.size()  )) ? "YES" : "NO") << endl;

    return 0;
}