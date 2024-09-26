#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    setPersonData(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    float percentage;

    setStudentData(float p) {
        percentage = p;
    }
};

class Teacher : public Person {
public:
    float salary;

     setTeacherData(float s) {
        salary = s;
    }
};

int main() {
    Student s;
    s.setPersonData("John", 20);
    s.setStudentData(85.6);
    cout << "Student: " << s.name << " Age: " << s.age << " Percentage: " << s.percentage << endl;

    Teacher t;
    t.setPersonData("Mr. Smith", 45);
    t.setTeacherData(50000);
    cout << "Teacher: " << t.name << " Age: " << t.age << " Salary: " << t.salary << endl;
}

