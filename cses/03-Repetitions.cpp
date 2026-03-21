#include <bits/stdc++.h>
using namespace std;
// approach -> you maintain 2 variables start/end and initiate a growing / sliding window at the start
// these variables extend until your current character is the same 
// as soon as the character changes they put start at end -> rinse and repeat, maintain maxLen and return

int main () {
  string input = "";
  cin>>input;

  if(input.size() < 1) return 0;

  int maxLen = 1;

  //sliding window 
  int start = 0; int end = 0;

  while(end < input.size()){
    end++;
    
    while(input[end] == input[end-1]){
      //keep getting window and update it
      int currWindow = end - start + 1;
      maxLen = max(maxLen, currWindow);
      end++;
    }
    //break when we're on a new char
    start = end;
  }
  cout<<maxLen;
  return 0;
}