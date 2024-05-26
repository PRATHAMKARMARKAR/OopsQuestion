#include <iostream>
#include <string>
using namespace std;
class Mother {
public:
    
    void display() const {
        cout << "I am the mother." << endl;
    }
};


class Daughter : public Mother {
public:
    
    void display() const {
        cout << "I am the daughter." << endl;
    }
};

int main() {
    Daughter daughter;

   
    daughter.display();

    
    daughter.Mother::display();

    return 0;
}
