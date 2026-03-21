#include <bits/stdc++.h>
using namespace std;
// example case -> 5x5 board
// approach -> first we calculate the number of possible positions for any 2 out of 25 squares to be occupied by the same 2 pieces(pieces order doesnt matter A B and B A are the same position)
// totalCombinations => 25C2 = 25 * 24 / 2

// now onto the goofy ahh neighs attacking each other -> we need to find out how many combinations out of our total combinations are invalid, due to them allowing attacks
// you need to start with breaking down the problem as much as possible and just imagine a single 2x3 / 3x2 and the 2 attackable postions in it
// since a knight has 8 possible moves on any decent board, and all of those 8 moves are like a 2x3 box in front of it(neighhh) in any given direction

// but heres the NOTABLE PART -> instead of calculating the 2x3s and 3x2s for any single position...
// calculate TOTAL number of 2x3 and 3x2 squares the given n x n board 1 by 1 (this can be made into a formula)


unsigned long long TwoKnights(long long n){
  long long totalCombinations = (n*n) * ((n*n)-1) / 2;

  long long invalidPostions =  4 * (n-1) * (n-2);
  //2 positions per 2x3 or 3x2 TopLeft BottomRight and TR BL
  return totalCombinations - invalidPostions;
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