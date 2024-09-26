#include <iostream>
using namespace std;

class MathOperations {
public:
    int operate(int a, int b) {
        return a + b;
    }

    float operate(float a, float b) {
        return a * b;
    }
};

int main() {
    MathOperations mo;
    cout << "Addition: " << mo.operate(5, 3) << endl;
    cout << "Multiplication: " << mo.operate(5.0f, 3.0f) << endl;
}

