#include <iostream>

using namespace std;


struct Complex {
    double real;
    double imag;
};


Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

void displayComplex(const Complex& c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}

int main() {

    Complex complex1, complex2, result;

   
    cout << "Enter real and imaginary parts of the first complex number:" << endl;
    cin >> complex1.real >> complex1.imag;

  
    cout << "Enter real and imaginary parts of the second complex number:" << endl;
    cin >> complex2.real >> complex2.imag;

    result = addComplex(complex1, complex2);

  
    cout << "Sum of the complex numbers:" << endl;
    displayComplex(result);

    return 0;
}
