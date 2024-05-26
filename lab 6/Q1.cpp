#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    float inches;

public:
    
    Distance() : feet(0), inches(0.0) {}

    
    Distance(int ft, float in) : feet(ft), inches(in) {
       
        if (inches >= 12.0) {
            feet += static_cast<int>(inches / 12);
            inches = inches - static_cast<int>(inches / 12) * 12;
        }
    }

    
    void display() const {
        std::cout << "Distance: " << feet << " feet " << inches << " inches" << std::endl;
    }

    
    Distance operator-(const Distance& d) const {
        int totalFeet = feet - d.feet;
        float totalInches = inches - d.inches;
        if (totalInches < 0) {
            totalFeet--;
            totalInches += 12;
        }
        return Distance(totalFeet, totalInches);
    }

   
    Distance operator+(const Distance& d) const {
        int totalFeet = feet + d.feet;
        float totalInches = inches + d.inches;
        if (totalInches >= 12) {
            totalFeet++;
            totalInches -= 12;
        }
        return Distance(totalFeet, totalInches);
    }

    Distance& operator+=(const Distance& d) {
        feet += d.feet;
        inches += d.inches;
        if (inches >= 12.0) {
            feet += static_cast<int>(inches / 12);
            inches = inches - static_cast<int>(inches / 12) * 12;
        }
        return *this;
    }

    // Overload -= operator
    Distance& operator-=(const Distance& d) {
        feet -= d.feet;
        inches -= d.inches;
        if (inches < 0) {
            feet--;
            inches += 12;
        }
        return *this;
    }

    
    int compare(const Distance& d) const {
        float thisTotal = feet * 12 + inches;
        float otherTotal = d.feet * 12 + d.inches;
        if (thisTotal > otherTotal) return 1;
        else if (thisTotal < otherTotal) return -1;
        else return 0;
    }

    
    int operator<(const Distance& d) const {
        return compare(d) == -1;
    }

    
    int operator>(const Distance& d) const {
        return compare(d) == 1;
    }
};

int main() {
    Distance d1(5, 9.5);
    Distance d2(2, 6.3);
    Distance d3 = d1 + d2;
    Distance d4 = d1 - d2;

    d1.display();
    d2.display();
    d3.display();
    d4.display();

    if (d1.compare(d2) == 1) {
        cout << "d1 is greater than d2" << std::endl;
    } else if (d1.compare(d2) == -1) {
        cout << "d2 is greater than d1" << std::endl;
    } else {
        cout << "d1 and d2 are equal" << std::endl;
    }

    return 0;
}
