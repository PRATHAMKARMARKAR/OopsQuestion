#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string schoolName;
    string highestDegree;

public:

    Student(const string& school, const string& degree) : schoolName(school), highestDegree(degree) {}

    void displayStudent() const {
        cout << "School/University: " << schoolName << endl;
        cout << "Highest Degree: " << highestDegree << endl;
    }
};


class Employee {
protected:
    string name;
    int employeeNumber;

public:
    
    Employee(const string& nm, int num) : name(nm), employeeNumber(num) {}

   
    void displayEmployee() const {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << employeeNumber << endl;
    }
};

class Manager : public Employee, public Student {
private:
    string title;
    float dues;

public:
    
    Manager(const string& nm, int num, const string& school, const string& degree, const string& t, float d)
        : Employee(nm, num), Student(school, degree), title(t), dues(d) {}

    
    void displayManager() const {
        displayEmployee();
        displayStudent();
        cout << "Title: " << title << endl;
        cout << "Dues: $" << dues << endl;
    }
};


class Scientist : public Employee, public Student {
private:
    int numOfPublications;

public:
    // Constructor
    Scientist(const string& nm, int num, const string& school, const string& degree, int pubs)
        : Employee(nm, num), Student(school, degree), numOfPublications(pubs) {}

    // Display scientist information
    void displayScientist() const {
        displayEmployee();
        displayStudent();
        cout << "Number of Publications: " << numOfPublications << endl;
    }
};

class Laborer : public Employee {
public: 
    Laborer(const string& nm, int num) : Employee(nm, num) {}

    
    void displayLaborer() const {
        displayEmployee();
    }
};

int main() {
   
    Manager manager("John Doe", 1001, "XYZ University", "PhD", "Senior Manager", 1000.0);
    Scientist scientist("Alice Smith", 2001, "ABC University", "Masters", 10);
    Laborer laborer("Bob Johnson", 3001);

   
    cout << "Manager Information:" << endl;
    manager.displayManager();

    cout << "\nScientist Information:" << endl;
    scientist.displayScientist();

    cout << "\nLaborer Information:" << endl;
    laborer.displayLaborer();

    return 0;
}
