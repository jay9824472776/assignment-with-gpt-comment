#include <iostream>
using namespace std;

class Circle {
    private:
        float radius;

    public:
        // Set the radius of the circle
        Circle(float r) : radius(r) {}

        // Calculate the area of the circle
        float calculateArea() {
            return 3.14159 * radius * radius;
        }

        // Calculate the circumference of the circle
        float calculateCircumference() {
            return 2 * 3.14159 * radius;
        }
};

int main() {
    Circle c(5); // Setting radius to 5

    // Calculate and display area and circumference
    cout << "Area: " << c.calculateArea() << endl;
    cout << "Circumference: " << c.calculateCircumference() << endl;

    return 0;
}

