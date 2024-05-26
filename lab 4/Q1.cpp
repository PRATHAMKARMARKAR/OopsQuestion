/* Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
Include member functions ‘setdata()’ and ‘showdata()’ to take the input and display the output.
Write main function to test your class. */
#include<iostream>
#include<string>
using namespace std;
class Student{
int roll_no;
string name;
public:
void setdata(int , string);
void showdata();
};
void Student::setdata(int r,string n){
   roll_no=r;
   name=n;
}
void Student::showdata(){

    cout<<"Name of student is -->"<<name<<endl;
    
    cout<<"roll number of student is -->"<<roll_no<<endl;
}
int main(){
    Student s1;
    s1.setdata(231418,"PRATHAM");
    s1.showdata();
    return 0;
}