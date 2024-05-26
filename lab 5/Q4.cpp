/*A point in a two-dimensional plane having coordinate as (x,y), can be represented by a
class whose private data members are x and y. Write the constructor and destructor
functions of the class. The constructor should initialise (x,y) by passing parameters
values. Now, a rectangle can be represented by the top-left and bottom-right vertices.
Define a class say ‘Rectangle’ whose private data members are top-left and bottom-right
vertices. Write the parameterized constructor function of the class ‘Rectangle’. Also,
write the destructor function. Finally, write a program to show the order in which
different constructors and destructors are called*/
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x_val, int y_val) : x(x_val), y(y_val) {
        cout << "Point constructor called" << endl;
    }

    ~Point() {
        cout << "Point destructor called" << endl;
    }
};

class Rectangle {
private:
    Point top_left;
    Point bottom_right;

public:
    Rectangle(int x1, int y1, int x2, int y2) : top_left(x1, y1), bottom_right(x2, y2) {
        cout << "Rectangle constructor called" << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }
};

int main() {
    Rectangle rect(0, 0, 5, 5);
    return 0;
}

