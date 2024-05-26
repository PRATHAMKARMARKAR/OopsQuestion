//Write C++ Program to swap two variable using reference variables.
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
int temp = a;
a = b;
b=temp;

}

int main (){
int x , y;
cout<<"no. after swaping"<<endl;
cout<<"first number -->"<<endl;
cin>>x;
cout<<"second number -->"<<endl;
cin>>y;
swap(x,y);
cout<<"no. after swaping"<<x<<endl;

cout<<"second number -->"<<y<<endl;

return 0;
}