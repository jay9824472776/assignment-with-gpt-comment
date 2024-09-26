#include<iostream>
using namespace std;

// Abstracting the internal details of the triangle class
class Triangle {
    private:
        int side1, side2, side3;

        // A private function to check if the triangle is valid
        bool isValidTriangle() {
            return (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2);
        }

    public:
        // Public function to set the sides of the triangle
        setSides(int a, int b, int c) {
            side1 = a;
            side2 = b;
            side3 = c;
        }

        // Public function to determine and display the type of triangle
        checkType() {
            if (isValidTriangle()) {
                if (side1 == side2 && side2 == side3) {
                    cout << "The triangle is Equilateral." << endl;
                } else if (side1 == side2 || side2 == side3 || side1 == side3) {
                    cout << "The triangle is Isosceles." << endl;
                } else {
                    cout << "The triangle is Scalene." << endl;
                }
            } else {
                cout << "Invalid triangle dimensions!" << endl;
            }
        }
};

int main() {
    Triangle t;
    t.setSides(3, 3, 3);  // Hides how sides are stored
    t.checkType();        // Provides a clean interface to interact with the object
    return 0;
}

