#include <bits/stdc++.h>
using namespace std;
// Collatz's Conjecture
// conjectures mess with my head

int main() {
  long long n;
  cin>>n;

  while (true){
    cout<<n<<" ";

    //ALWAYS ENDING UP AT 1
    if(n == 1) break;

    //even
    if(n % 2 == 0) {
      n=n/2;}
    //odd
    else {
      n=n*3 + 1;
    }
  }
  return 0;
}