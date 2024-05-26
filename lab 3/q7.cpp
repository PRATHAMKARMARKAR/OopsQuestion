/*Create a class named Shirt that has the public data members collarsize and sleeveLength.
Create a class named Pants that has the public data members waistSize and inSeam. Write a
program that declares one object of each type Shirt and Pants and assigns values to the objects’
data fields. Write two overloaded functions named displayClothingFacts(). One version of the
function takes a Shirt object as an argument; the other version takes a Pants object. Each
version displays the facts about the piece of clothing. Your main() function should demonstrate
that you can call displayClothingFacts() with either type of clothing.*/
#include<bits/stdc++.h>
using namespace std;
class Shirt{
    public:
    int collarsize;
    int sleevelenght;
    
    
};
class Pants{
      public:  
      int waistsize;
      int inseam;
};
void displayclothingfacts(Shirt&shirt){
cout<<"shirts facts -->"<<endl;
cout<<"collarsize -->"<<shirt.collarsize<<endl;
cout<<"sleevelenght -->"<<shirt.sleevelenght<<endl;
}
void displayclothingfacts(Pants&pants){
cout<<"shirts facts -->"<<endl;
cout<<"waistsize -->"<<pants.waistsize<<endl;
cout<<"inseam -->"<<pants.inseam<<endl;
}
int main (){
    Shirt s;
    s.collarsize = 4;
    s.sleevelenght = 5;
    displayclothingfacts(s);
    return 0;
}

