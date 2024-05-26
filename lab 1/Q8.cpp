/*8. Write a function strcat(s,t) which concatenates the string t to the end of string s.
Call this function from main function.*/
#include<bits/stdc++.h>
using namespace std;
void strcat(char s[],char t[]){
   int slenght = strlen(s);
   int tlenght = strlen(t);
   for (int  i = 0; i < tlenght; i++)
   {
        s[slenght + i] = t[i];
   }
    s[slenght + tlenght] = '\0';
    cout<<"string concat is -->"<<s;
}
int main (){
char s[100];
char t[100];
cout<<"enter the first string -->";
cin>>s;
cout<<"enter the second string -->";
cin>>t;
strcat(s,t); 



}