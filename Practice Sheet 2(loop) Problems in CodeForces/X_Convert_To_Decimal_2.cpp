#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        char binary[32]; // enough for 32 bits integers

        //initializing index here so that we can increase and keep value into it
        int idx = 0;

        if(n == 0)
        {
            binary[idx++] = '0'; // this will keep the integer decimal value as 0 binary character
        }else{
            while (n > 0)
            {
                int bit = n % 2;
                binary[idx++] = (bit + '0'); // this will also assign the value and go to the next index
                n /= 2;
            }
        }


        //lets get the summation of 1 value in binary
        int coutn_1 = 0;

        //new binary count
        char binaryNew [32];
        int idxNew = 0;


        for (int i = idx - 1; i >= 0; i--)
        {
            if(binary[i] == '1')
            {
                coutn_1 ++;
                
                // new binary count
                binaryNew[idxNew++] = '1';
            }
        }

        // reverse(binaryNew.begin(), binaryNew.end()); it will not work like that because binary is not string 

        // we have to reverse it  like character array because it character array
        // reverse(binaryNew, binaryNew +idxNew);


        //printing the new binary
        int decimal_new = 0;
        for (int i = 0; i < idxNew; i++)
        {
            decimal_new += (1* pow(2,i));
        }
        

        

        cout << decimal_new << endl;
        
    }
    
    return 0;
}