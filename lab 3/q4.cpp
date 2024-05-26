/*Write four overloaded function to perform addition of different types as follows: First function
to add three integers, second to add three floats, third function to add three doubles, and fourth
to add three long doubles. Call these functions from main function.*/
#include<bits/stdc++.h>
using namespace std;
int add (int a,int b, int c){
    return a+b+c;
}
float add(float a, float b,float c){
    return a+b+c; 
}
double add(double a, double b,double c){
    return a+b+c; 
}
long double add(long double a, long double b,long double c , long double d){
    return a+b+c+d; 
}
int main (){
 int a , b, c;
  cout<<"enter the value of a -->"<<endl;
  cin>>a;
  cout<<"enter the value of b -->"<<endl;
  cin>>b;
  cout<<"enter the value of c -->"<<endl;
  cin>>c;
 long double d;
    cout << "enter the value of d -->" << endl;
    cin >> d;
       cout << "result -->" << add(a, b, c, d) << endl;
 return 0;

}




