#include <bits/stdc++.h>
using namespace std;

int numberSpiral(int y, int x)
{
    // row y bigger than col x
    if (y >= x)
    {
        // row even
        if (y % 2 == 0)
        {
            return y * y - x - 1;
        }
        // row odd
        else
        {
            return (y - 1) * (y - 1) + 1 + x;
        }
    }
    // col x bigger than row y
    else
    {
        // col odd
        if (x % 2 == 1)
        {
            return x * x - y;
        }
        // col even
        else
        {
            return (x - 1) * (x - 1) + 1 + y;
        }
    }
}

int main()
{
    int tests = 0;
    cin >> tests;

    while (tests)
    {
        int row, col;
        cin >> row >> col;
        cout << numberSpiral(row, col) << "\n";
        tests--;
    }
    return 0;
}