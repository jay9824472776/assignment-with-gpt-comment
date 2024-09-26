#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int empID;
        double salary;

    public:
        // Constructor to initialize employee details
        Employee(string n, int id, double s) : name(n), empID(id), salary(s) {}

         calculateSalary(double performanceRating) {
            salary += salary * performanceRating;
        }

         displayEmployee() {
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << empID << endl;
            cout << "Salary: $" << salary << endl;
        }
};

int main() {
    Employee e("John", 101, 5000);
    e.calculateSalary(0.1);  // 10% performance bonus
    e.displayEmployee();

    return 0;
}

