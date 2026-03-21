#include <bits/stdc++.h>
using namespace std;

// the main thing here was to think about starting from the end of the number list
// and also keeping calculated sums in a different variable to avoid recalculating the vector(sumA, sumB)
int main()
{
  int n;
  cin>> n;
  
  // we could group 1-7, 2-6, 3-5, but remaining 4 can't be divided further so this approach fails
  // the larger numbers are the bigger differentiators i feel so we start with them
  // dont worry about differentiating the approach based on the num being even or odd first, just try the same approach on all the inputs and only print NO if the sums of sets arent equal

  // approach -> start taking bigger nums (hence starting at the end) and add them to a set based on whichever sets' sum is already larger, and add it to the smaller set, this approach tries to keep both sets balanced
  vector<int> a, b; 
  long long sumA = 0, sumB = 0;

  for (int i = n; i >= 1; i--){
    if(sumA > sumB){
      b.push_back(i);
      sumB+=i;
    }
    else {
      a.push_back(i);
      sumA+=i;
    }
  }
  //now we check if our sums are equally split if yea then print
  if (sumA == sumB) {
    cout<<"YES"<<endl;
    cout<<a.size()<<endl;
    for(const int& num : a){
      cout<<num<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(const int& num : b){
      cout<<num<<" ";
    }
  }
  else {
    cout<<"NO";
  }
  return 0;
}