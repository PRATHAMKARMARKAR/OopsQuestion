/*Define a class named Movie. Include private fields for the title, year, and name of the director.
Include three public functions with the prototypes void Movie::setTitle(char *); , void
Movie::setYear(int); and void Movie::setDirector(char *);. Include another function that
displays all the information about a Movie. Write a main() function that declares a movie
object named myFavoriteMovie. Set and display the object’s fields.*/
#include<bits/stdc++.h>
using namespace std;
class Movie{
int year;
string title;
string directorname;
public:
void settitle(string);
void setyear(int);
void setdirector(string);
void displaydata();
};
void Movie :: settitle (string name){
    title = name;
}
void Movie :: setyear( int y){
    year = y;
}
void Movie :: setdirector(string dn){
    directorname = dn;
}
void Movie :: displaydata(){
    cout<<"Name of movie is -->"<<title<<endl;
    cout<<"name of director is -->"<<directorname<<endl;
    cout<<"movie year is -->"<<year<<endl;
}
int main(){
    Movie m;
    m.setdirector("pratham");
    m.settitle("princeofJUET");
    m.setyear(2024);
    m.displaydata();
    return 0;
}