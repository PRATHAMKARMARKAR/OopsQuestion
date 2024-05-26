// 1. Write a program to calculate factorial of a number N using recursion.
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int f;
    if (n == 1)
    {
        return 1;
    }
    else

        return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    cout << fact(n);
    return 0;
}