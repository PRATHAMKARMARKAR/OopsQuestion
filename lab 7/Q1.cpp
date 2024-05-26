#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    int rollNumber;
    string name;

public:
   
    Student(int roll, const string& nm) : rollNumber(roll), name(nm) {}

 
    void display() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Exam : public Student {
protected:
    int marks[6]; 

public:
   
    Exam(int roll, const string& nm, int m[]) : Student(roll, nm) {
        for (int i = 0; i < 6; ++i) {
            marks[i] = m[i];
        }
    }

    
    void display() const {
        Student::display();
        cout << "Marks in six subjects: ";
        for (int i = 0; i < 6; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Exam {
private:
    int totalMarks;

public:
   
    Result(int roll, const string& nm, int m[], int total) : Exam(roll, nm, m), totalMarks(total) {}

    
    void display() const {
        Exam::display();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    int rollNumber;
    string name;
    int marks[6];

    cout << "Enter student details:" << endl;
    cout << "Roll Number: ";
    cin >> rollNumber;
    cin.ignore(); // Clear input buffer
    cout << "Name: ";
    getline(cin, name);

    cout << "Enter marks in six subjects:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    int totalMarks = 0;
    for (int i = 0; i < 6; ++i) {
        totalMarks += marks[i];
    }

    Result result(rollNumber, name, marks, totalMarks);
    cout << "\nStudent Result:" << endl;
    result.display();

    return 0;
}
