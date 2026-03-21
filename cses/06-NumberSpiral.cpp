#include <bits/stdc++.h>
using namespace std;

unsigned long long numberSpiral(unsigned long long y, unsigned long long x)
{
    // row y bigger or equal to col x
    if (y >= x)
    {
        // row even
        if (y % 2 == 0)
        {
            return y * y - (x - 1);
        }
        // row odd
        else
        {
            return (y - 1) * (y - 1) + 1 + (x-1);
        }
    }
    // col x bigger or equal to row y
    else
    {
        // col odd
        if (x % 2 == 1)
        {
            return x * x - (y-1);
        }
        // col even
        else
        {
            return (x - 1) * (x - 1) + 1 + (y-1);
        }
    }
}

int main()
{
    unsigned long long tests = 0;
    cin >> tests;

    while (tests)
    {
        unsigned long long row, col;
        cin >> row >> col;
        cout << numberSpiral(row, col) << "\n";
        tests--;
    }
    return 0;
}