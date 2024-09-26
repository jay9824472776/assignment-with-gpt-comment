#include <iostream>
using namespace std;

class Marks {
public:
    int subject1, subject2;

    void setMarks(int m1, int m2) {
        subject1 = m1;
        subject2 = m2;
    }
};

class Student {
public:
    int rollNo;

    setRollNo(int roll) {
        rollNo = roll;
    }
};

class Marksheet : public Student, public Marks {
public:
    display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks 1: " << subject1 << " Marks 2: " << subject2 << endl;
    }
};

int main() {
    Marksheet ms;
    ms.setRollNo(101);
    ms.setMarks(80, 90);
    ms.display();
}

