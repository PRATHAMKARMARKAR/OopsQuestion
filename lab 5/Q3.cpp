/*Consider a C++ program where an object of a class is declared globally. The program
aims to show that the constructor of the globally declared object is the first function to be
called when the program starts executing, and the destructor of the object is the last
function to be called when the program ends its execution.
To illustrate this, you would:*/
#include <iostream>
using namespace std;

class GlobalObject {
public:
    GlobalObject() {
        cout << "Constructor called" << endl;
    }

    ~GlobalObject() {
        cout << "Destructor called" << endl;
    }
};

GlobalObject globalObj; 


int main() {
    cout << "Program started" << endl;
    cout << "Inside main function" << endl;
    cout << "Program ending" << endl;
    return 0;
}
