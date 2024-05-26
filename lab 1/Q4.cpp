/*4. Write a program using a function which returns 1 if A[i]=i otherwise it returns 0. Here A
is a 1-D array.*/
#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == i)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = check(arr, n);
    if (result == 1)
    {
        cout << "arr[i]==i";
    }
    else
        cout << "arr[i]!=i";
    return 0;
}