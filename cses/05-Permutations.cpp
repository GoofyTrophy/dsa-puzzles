#include <bits/stdc++.h>
using namespace std;
// approach -> print evens only first then the odds (or viceversa), this way the list always have a difference of 2 no matter even or odd
int main(){
    int n;
    cin>>n;

    if(n == 2 || n == 3) {
        cout<<"NO SOLUTION";
        return 0;
    }
    //i gotchu w/ the evens
    for (int i = 2; i <= n; i += 2){
        cout<<i<<" ";
    }
    //i gotchu w/ the odds
    for (int i = 1; i <= n; i += 2){
        cout<<i<<" ";
    }
    return 0;
}