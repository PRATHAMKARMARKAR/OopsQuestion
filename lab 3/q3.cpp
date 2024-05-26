/*Create a four-function calculator for fractions. Here are the formulas for the four arithmetic
operations applied to fractions:
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)*/
#include<bits/stdc++.h>
using namespace std;
void addfraction( int a ,int b ,int c ,int d){
    int result = (a*d + b*c) / (b*d);
    cout<<"value of addition -->"<<result;
    }

int main (){
    int a , b , c ,d;
    cout<<"enter the value of a -->"<<endl;
    cin>>a;
    cout<<"enter the value of b -->"<<endl;
    cin>>b;
    cout<<"enter the value of c -->"<<endl;
    cin>>c;
    cout<<"enter the value of d -->"<<endl;
    cin>>d;
    cout<<"addition of fraction is -->"<<endl;
    addfraction(  a , b , c , d);
     
    
    return 0;

}