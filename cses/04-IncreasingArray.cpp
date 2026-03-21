#include <bits/stdc++.h>
using namespace std;
//approach -> you loop thro each number starting at 2nd number and if currNumber is smaller than prevNumber then find out by how much
// you add that count to the current number(IMP) and to variable totalMoves and return totalMoves
int main()
{
    // number of elements in the array
    long long n;
    cin >> n;
 
    // taking in the array
    int arr[n];
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        arr[i] = temp;
    }
 
    // get the total
    long long totalMoves = 0;
    for (long long i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            // get difference between curr and prev (we're considering making them equal)
            int difference = arr[i - 1] - arr[i];
            totalMoves += difference;
            // IMP also remember to make curr equal to prev before u exit the iteration, so the next number has an accurate lookup
            arr[i] += difference;
        };
    }
 
    // return the totalMoves
    cout << totalMoves;
 
    return 0;
}