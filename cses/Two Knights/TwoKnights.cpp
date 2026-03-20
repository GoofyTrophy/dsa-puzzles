#include <bits/stdc++.h>
using namespace std;

unsigned long long TwoKnights(long long n){
  //calculate number of 2x3 and 3x2 squares the given n x n board.
  long long twoByThrees =  4 * (n-1) * (n-2);
  //2 positions per 2x3 or 3x2 

  return ((n*n) * ((n*n)-1) / 2) - twoByThrees;
  //return number of combinations(order doesnt matter)
}
int main()
{
  int n;
  cin>> n;
  for(int i = 1; i<= n; i++){
    cout<<TwoKnights(i)<<endl;
  }
    return 0;
}