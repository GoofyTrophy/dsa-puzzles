#include <bits/stdc++.h>
using namespace std;
int Setsubun(int currentAge, int totalBeans)
{
    int years = 0;
    while (totalBeans > 0)
    {
        currentAge++;
        totalBeans -= currentAge;
        years++;
    }
    return years;
}
int main()
{
    cout << Setsubun(4, 43);
    return 0;
}