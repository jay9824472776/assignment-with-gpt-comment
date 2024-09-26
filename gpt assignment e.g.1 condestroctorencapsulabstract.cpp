#include <iostream>
using namespace std;

// Inline function for multiplication
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function for cubic values
inline int cubic(int a) {
    return a * a * a;
}

int main() {
    int num1 = 3, num2 = 4;
    
    // Multiplication of two numbers
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    
    // Cubic value of a number
    cout << "Cubic value of " << num1 << ": " << cubic(num1) << endl;

    return 0;
}

