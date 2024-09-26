#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;

    setRollNo(int roll) {
        rollNo = roll;
    }
};

class Test : public Student {
public:
    int marks1, marks2;

    setMarks(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }
};

class Result : public Test {
public:
    int totalMarks() {
        return marks1 + marks2;
    }
};

int main() {
    Result r;
    r.setRollNo(101);
    r.setMarks(75, 85);
    cout << "Roll No: " << r.rollNo << " Total Marks: " << r.totalMarks() << endl;
}

