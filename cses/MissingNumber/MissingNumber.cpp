#include <bits/stdc++.h>
using namespace std;

int main () {
  // total number of digits including 1 missin number
  long n;
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