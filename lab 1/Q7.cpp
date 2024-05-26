/*7. Write a function which takes a string as input from user and returns the length of that
string without using any string library functions. Call this function from main function.*/
#include <bits/stdc++.h>
using namespace std;
void checklenght(char s[])
{     int n=0;
    for (int i = 0; s[i]!='\0'; i++)
    {      
        n++;
    }
    cout << "size of string -->" << n;
}
int main()
{
    char s[100];
    cout << "enter the string -->";
    cin >> s;
    int n;
    checklenght( s);

    return 0;
}