#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length, width;

    public:
        // Constructor to set the length and width
        Rectangle(float l, float w) : length(l), width(w) {}

        // Calculate the area of the rectangle
        float calculateArea() {
            return length * width;
        }

        // Calculate the perimeter of the rectangle
        float calculatePerimeter() {
            return 2 * (length + width);
        }
};

int main() {
    Rectangle r(5, 3); // Length: 5, Width: 3

    // Calculate and display area and perimeter
    cout << "Area: " << r.calculateArea() << endl;
    cout << "Perimeter: " << r.calculatePerimeter() << endl;

    return 0;
}

