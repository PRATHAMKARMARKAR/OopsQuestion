/*5. Write a program to round off an integer “i” to the next largest multiple of another integer
“j”. Take the values of i and j from user. For example, if i=256 and j=7 then you will get
259.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int i, j;
cout<<"enter the number -->"<<endl;
cin>>i;
cout<<"enter the multiple number -->"<<endl;
cin>>j;
for (  i = i;  i%j!=0; i++)
{}  
cout<<"largest integer is -->"<<i;
return 0;
}