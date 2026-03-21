#include <bits/stdc++.h>
using namespace std;

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