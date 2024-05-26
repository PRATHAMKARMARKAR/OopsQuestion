#include <iostream>
#include <string>

using namespace std;
class Employee {
protected:
    string name;
    int ID;
    float salary;

public:
   
    Employee(const string& n, int id, float sal) : name(n), ID(id), salary(sal) {}

   
    virtual void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter salary: ";
        cin >> salary;
    }

    
    virtual void displayData() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Subclass Teacher
class Teacher : public Employee {
protected:
    string subject;
    string qualification;

public:
   
    Teacher(const string& n, int id, float sal, const string& sub, const string& qual)
        : Employee(n, id, sal), subject(sub), qualification(qual) {}

    
    void readData() override {
        Employee::readData();
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter qualification: ";
        cin >> qualification;
    }

   
    void displayData() const override {
        Employee::displayData();
        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};


class Officer : public Employee {
protected:
    string grade;
    string department;

public:
    
    Officer(const string& n, int id, float sal, const string& grd, const string& dept)
        : Employee(n, id, sal), grade(grd), department(dept) {}

   
    void readData() override {
        Employee::readData();
        cout << "Enter grade: ";
        cin >> grade;
        cout << "Enter department: ";
        cin >> department;
    }

    
    void displayData() const override {
        Employee::displayData();
        cout << "Grade: " << grade << endl;
        cout << "Department: " << department << endl;
    }
};


class Regular : public Teacher {
protected:
    int experience;
    string designation;

public:
    
    Regular(const string& n, int id, float sal, const string& sub, const string& qual,
            int exp, const string& desig)
        : Teacher(n, id, sal, sub, qual), experience(exp), designation(desig) {}

   
    void readData() override {
        Teacher::readData();
        cout << "Enter experience (in years): ";
        cin >> experience;
        cout << "Enter designation: ";
        cin >> designation;
    }

    
    void displayData() const override {
        Teacher::displayData();
        cout << "Experience: " << experience << " years" << endl;
        cout << "Designation: " << designation << endl;
    }
};


class Casual : public Teacher {
protected:
    int contractDuration;
    float hourlyRate;

public:
   
    Casual(const string& n, int id, float sal, const string& sub, const string& qual,
           int duration, float rate)
        : Teacher(n, id, sal, sub, qual), contractDuration(duration), hourlyRate(rate) {}

    
    void readData() override {
        Teacher::readData();
        cout << "Enter contract duration (in months): ";
        cin >> contractDuration;
        cout << "Enter hourly rate: ";
        cin >> hourlyRate;
    }

    
    void displayData() const override {
        Teacher::displayData();
        cout << "Contract Duration: " << contractDuration << " months" << endl;
        cout << "Hourly Rate: $" << hourlyRate << endl;
    }
};

int main() {
    
    Regular regular("John", 101, 50000, "Math", "PhD", 10, "Senior Teacher");
    Casual casual("Alice", 102, 30000, "Science", "Masters", 6, 30.5);
    Officer officer("Robert", 201, 60000, "Grade A", "Administration");

    
    cout << "Regular Teacher Information:" << endl;
    regular.readData();
    regular.displayData();

    cout << "\nCasual Teacher Information:" << endl;
    casual.readData();
    casual.displayData();

    cout << "\nOfficer Information:" << endl;
    officer.readData();
    officer.displayData();

    return 0;
}
