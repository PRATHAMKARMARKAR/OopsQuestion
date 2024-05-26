/*Create two classes DM and DB which store the value of the distances. DM stores distances in
meters and centimeters and DB in feet and inches. Write a program that can read values for the
class objects and add one object of DM with another object of DB. Use a friend function to carry
out the addition operation. The object that stores the results may be a DM object or DB object,
depending on the units in which the results are required. The display should be in the format of
feet and inches or meters and centimeters depending on the object on display.*/
#include <iostream>

class DB; 

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    void display() {
        std::cout << "Distance: " << meters << " meters and " << centimeters << " centimeters" << std::endl;
    }

    friend DM add(const DM&, const DB&);
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    void display() {
        std::cout << "Distance: " << feet << " feet and " << inches << " inches" << std::endl;
    }

    friend DM add(const DM&, const DB&);
};

DM add(const DM& dm, const DB& db) {
   
    int meters = db.feet * 0.3048 + db.inches * 0.0254; 
    int centimeters = (db.feet * 0.3048 + db.inches * 0.0254 - meters) * 100; 

   
    meters += dm.meters;
    centimeters += dm.centimeters;

  
    meters += centimeters / 100;
    centimeters %= 100;

    return DM(meters, centimeters);
}

int main() {
    DM dm1(2, 50);
    DB db1(3, 20);

    std::cout << "DM1: ";
    dm1.display();
    std::cout << "DB1: ";
    db1.display();

    DM result = add(dm1, db1);

    std::cout << "Result: ";
    result.display();

    return 0;
}
