/*Create a class rectangle with attributes length and width. Provide member functions that
calculate the perimeter and area of the rectangle. Provide member functions to get the values
from users and display the values of member variables. Write a program to test the class.*/
#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int lenght;
    int width;
    public:
    void getdata(int , int );
    int  area();
    int  perimeter();
};
void rectangle :: getdata(int l, int w){
    lenght=l;
    width=w;
}
int rectangle :: area(){
    return lenght * width;
}
int rectangle :: perimeter(){
    return 2*(lenght + width);
}

int main (){
    rectangle r;
    r.getdata(4,5);
    cout<<"area of rectangle is -->"<<r.area()<<endl;
     cout<<"perimeter of rectangle is -->"<<r.perimeter();
    return 0;
}
