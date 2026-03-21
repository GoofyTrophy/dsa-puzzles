#include <bits/stdc++.h>
using namespace std;
// approach -> hm this is really easy one, just 2^n is gonna be our answer and mod that by 1E9 + 7 (remember modding means to GET REMAINDER of NUM / in this case 1e9 + 7)
// but 2^n overflows very soon, around 2^64 (a variable which is unsigned long long is 64 bits and can store 2^64 - 1 bits, next one increases the bit count by 1 and it simple resets to 0 and cant count the overflow in it)

// the trick is to mod with every iteration, and not allow overflowing, 1e9 + 7 is our cap and we never hit 2^64 limit (1.8 * 10^19) cus we mod everytime
int main(){
    int n;
    cin>>n;
    if (n==0) return 0;
    //atleast 2 bitstrings for n = 1 and onwards
    long long bitStrings = 2;
    for(int i = 1; i < n; i++){
        bitStrings *= 2;
        // cout<<"before modding at n = "<<i<<" bitstrings = "<<bitStrings<<endl;
        bitStrings %= 1000000000 + 7;
        // cout<<"after modding at n = "<<i<<" bitstrings = "<<bitStrings<<endl;
    }

    cout<< bitStrings<<endl;
    return 0;
}