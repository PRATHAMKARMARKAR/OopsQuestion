/*Write a program to perform addition of two complex numbers using constructor
overloading. The first constructor which takes no argument is used to create objects
which are initialized with zero, second which takes one argument is used to initialize real
and imaginary parts to equal values and third which takes two argument is used to
initialized real and imaginary to two different values. Include sum member function that
takes two objects and performs the addition of these two objects. Write display functi*/
#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:

    Complex() {
        real = 0.0;
        imag = 0.0;
    }

  
    Complex(double r) {
        real = r;
        imag = r;
    }

   
    Complex(double r, double i) {
        real = r;
        imag = i;
    }

  
    Complex sum(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }


    void display() {
        cout << "Real Part: " << real << endl;
        cout << "Imaginary Part: " << imag << endl;
    }
};

int main() {
        Complex c1; 
    Complex c2(3.0); 
    Complex c3(2.5, 1.5); 

   
    cout << "Initial values of complex numbers:" << endl;
    cout << "Complex 1:" << endl;
    c1.display();
    cout << "Complex 2:" << endl;
    c2.display();
    cout << "Complex 3:" << endl;
    c3.display();


    Complex result = c1.sum(c2.sum(c3));


    cout << "Sum of complex numbers:" << endl;
    result.display();

    return 0;
}
