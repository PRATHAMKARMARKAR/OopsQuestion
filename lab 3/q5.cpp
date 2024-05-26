/*Write a function that accepts two arguments: a string name of a movie and an integer running
time in minutes. Provide a default value for the minutes so that if you call the function without
an integer argument, the minutes default to 90. Write a main () function that proves that you
can call the function with a string argument alone as well as with a string and an integer.*/
#include <bits/stdc++.h>
using namespace std;
class movie{
    int time=90;
    string name;
    public:
    void setdata(int t, string n){
   time = t;
   name = n;
}
    void displaydata(){
    cout<<"movie name is -->"<<name<<endl;
    cout<<"movie time is -->"<<time<<endl;
}
};



int main(){
    int t;
    string name;
    cout<<"enter the name of movie"<<endl;
    cin>>name;
    
    cout<<"enter the time of movie"<<endl; 
    cin>>t;
    movie m;
   
    m.setdata(t,name);
    m.displaydata();
  
    return 0;
}
