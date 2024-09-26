#include <iostream>
using namespace std;

class Calculator {
    public:
        // Function to add two numbers
        int add(int a, int b) {
            return a + b;
        }

        // Function to subtract two numbers
        int subtract(int a, int b) {
            return a - b;
        }

        // Function to multiply two numbers
        int multiply(int a, int b) {
            return a * b;
        }

        // Function to divide two numbers
        float divide(int a, int b) {
            return (b != 0) ? (float)a / b : 0; // Avoid division by zero
        }
};

int main() {
    Calculator calc;
    int a = 10, b = 5;

    // Using calculator functions
    cout << "Addition: " << calc.add(a, b) << endl;
    cout << "Subtraction: " << calc.subtract(a, b) << endl;
    cout << "Multiplication: " << calc.multiply(a, b) << endl;
    cout << "Division: " << calc.divide(a, b) << endl;

    return 0;
}

