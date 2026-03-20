#include <bits/stdc++.h>
using namespace std;
// print evens first then the odds or viceversa, they always have a difference of 2 (which is >1)
int main(){
    int n;
    cin>>n;
    if(n == 2 || n == 3) {
        cout<<"NO SOLUTION";
        return 0;
    }
    for (int i = 2; i <= n; i = i + 2){
        cout<<i<<" ";
    }
    for (int i = 1; i <= n; i = i + 2){
        cout<<i<<" ";
    }
    return 0;
}