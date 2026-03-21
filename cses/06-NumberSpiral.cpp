#include <bits/stdc++.h>
using namespace std;
//approach -> looking at the spiral you need to identify the patterns that come by (can u see the layers in this square) but the main goal is to find out the top number of a given position(first row / first column are the edges of all the layers)

// you can only apply the column approach when the given column is greater than equal to the row number(for eg -> you cant find 3x2 with column approach... that requires row approach but you can find 1x3, 2x3 upto 3x3)
// column approach->
// for the columns, odd position's top number, the value is a square of the column number (1->1, 3->9, 5->25)
// then the numbers below that are the subtraction of top number - (row-1)
// for the columns, even position's top number, the value is a square of the (n-1)'s column number + 1 (4 -> 3^2 + 1 -> 9+1 -> 10)
// then the numbers below that are the addition of top number + row

// row approach -> 
// for when row is greater than column; same pattern as column one btw
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