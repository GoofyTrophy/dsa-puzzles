#include <bits/stdc++.h>
using namespace std;

// long long int WeirdAlgo(long long int n){
//   cout<<n<<" ";
//   if (n<0) return -1;
//   if (n==1) return 0;
//   if (n%2 == 0) return WeirdAlgo(n/2);
//   else return WeirdAlgo(n*3+1);
// }

int main() {
  long long int n;
  cin>>n;
  while (true){
    cout<<n<<" ";
    if(n < 0) break;
    if(n == 1) break;
    //even
    if(n % 2 == 0) n=n/2;
    //odd
    else n=n*3 + 1;
  }
  return 0;
}