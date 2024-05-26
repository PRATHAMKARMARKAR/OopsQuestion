#include <iostream>
#include <string>
using namespace std;
class MyString {
private:
    string str;

public:
    
    MyString() {}

   
    MyString(const string& s) : str(s) {}

   
    MyString operator+(const MyString& other) const {
        MyString result;
        result.str = this->str + other.str;
        return result;
    }

    
    void display() const {
      cout << str << std::endl;
    }
};

int main() {
   
    MyString s1, s2;

    
    MyString s3("Hello"), s4("World");

   
    MyString s5 = s3 + s4;

    
    s5.display();

    return 0;
}
