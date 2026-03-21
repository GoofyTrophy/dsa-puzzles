#include <bits/stdc++.h>
using namespace std;
// approach -> use Sum of N numbers formula to calculate the finalSum and keep subtracting the inputs and return the final remaining portion from the sum thats the missing number 
int main () {

  long long n;
  cin>>n;

  long long totalSum = n * (n+1) / 2;
  
  for (int i = 0; i<n-1 ; i++){
    int temp;
    cin>>temp;
    totalSum-=temp;
  }
  
  cout<<totalSum<<endl;
  return 0;
}