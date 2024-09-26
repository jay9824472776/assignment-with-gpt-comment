#include <iostream>
using namespace std;

class Address {
    public:
        string city, street;
        int houseNo;
};

class Student {
    private:
        string name;
        int rollNumber;
        int marks;
        string grade;
        Address address;

    public:
        // Constructor to initialize student details
        Student(string n, int roll, int m, Address addr) : name(n), rollNumber(roll), marks(m), address(addr) {}

         calculateGrade() {
            if (marks >= 90) {
                grade = "A";
            } else if (marks >= 75) {
                grade = "B";
            } else {
                grade = "C";
            }
        }

        displayStudentInfo() {
            calculateGrade();
            cout << "Name: " << name << "\nRoll Number: " << rollNumber << "\nMarks: " << marks
                 << "\nGrade: " << grade << endl;
            cout << "Address: House No " << address.houseNo << ", " << address.street << ", " << address.city << endl;
        }
};

int main() {
    Address addr = {"New York", "5th Ave", 101};
    Student s("Alice", 101, 85, addr);
    s.displayStudentInfo();

    return 0;
}

