#include <iostream>
using namespace std;
class Rational {
private:
    int numerator;
    int denominator;

public:
  
    Rational(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

    void getInput() {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "Invalid input: Denominator cannot be zero." << endl;
            numerator = 0;
            denominator = 1;
        }
    }

    void display() const {
        cout << numerator << "/" << denominator;
    }

  
    Rational operator+(const Rational& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Rational(num, denom);
    }

    Rational operator-(const Rational& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Rational(num, denom);
    }

  
    Rational operator*(const Rational& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Rational(num, denom);
    }

  
    Rational operator/(const Rational& other) const {
        if (other.numerator == 0) {
            cout << "Invalid operation: Division by zero." << std::endl;
            return Rational();
        }
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Rational(num, denom);
    }
};

int main() {
    Rational r1, r2, result;
    
   cout << "Enter values for first fraction:" << endl;
    r1.getInput();
    
   cout << "Enter values for second fraction:" <<endl;
    r2.getInput();

    result = r1 + r2;
    cout << "Addition: ";
    result.display();
    cout << endl;

    result = r1 - r2;
    cout << "Subtraction: ";
    result.display();
    cout <<endl;

    result = r1 * r2;
   cout << "Multiplication: ";
    result.display();
   cout << endl;

    result = r1 / r2;
   cout << "Division: ";
    result.display();
   cout << endl;

    return 0;
}
