#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<5) {
        cout<<"NO SOLUTION";
        return 1;
    }
    vector<int> vec1 = {};
    vector<int> vec2 = {};
    
    for(int i = n; i > 0; i--){
        if(i%2 == 0){
            vec1.push_back(i);
        } else {
            vec2.push_back(i);
        }
    }
    for(const auto &a : vec1){
        cout<<a << " ";
    }
    for(const auto &a : vec2){
        cout<<a << " ";
    }
    return 0;
}