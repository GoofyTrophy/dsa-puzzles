#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin>> n;
  
  //we could group 1-7, 2-6, 3-5, but remaining 4 can't be divided further so this approach fails
  //the larger numbers are the bigger differentiators i feel so we start with them
  vector<int> a, b; 
  long long sumA = 0, sumB = 0; //holding the sum so we dont have to recalc each loop

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