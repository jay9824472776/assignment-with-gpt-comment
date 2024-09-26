#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
        string country;

    public:
        // Constructor to set name, age, and country
        Person(string n, int a, string c) : name(n), age(a), country(c) {}

        // Get the name of the person
        string getName() {
            return name;
        }

        // Get the age of the person
        int getAge() {
            return age;
        }

        // Get the country of the person
        string getCountry() {
            return country;
        }

        // Display the details of the person
        display() {
            cout << "Name: " << name << ", Age: " << age << ", Country: " << country << endl;
        }
};

int main() {
    // Create a Person object
    Person p("Alice", 30, "USA");

    // Display person details
    p.display();

    return 0;
}

