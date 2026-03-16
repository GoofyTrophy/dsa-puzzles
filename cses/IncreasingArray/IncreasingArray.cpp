#include <bits/stdc++.h>
using namespace std;
 
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
    long long total = 0;
    for (long long i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            // get difference between curr and prev (we're considering making them equal)
            total += arr[i - 1] - arr[i];
            // now we make curr equal to prev since its been accounted for
            arr[i] = arr[i - 1];
        };
    }
 
    // return the total
    cout << total;
 
    return 0;
}