#include <iostream>
using namespace std;

class Arithmetic {
    private:
        int num1, num2;

    public:
        // Constructor to initialize numbers
        Arithmetic(int a, int b) : num1(a), num2(b) {}

        int addition() {
            return num1 + num2;
        }

        int subtraction() {
            return num1 - num2;
        }

        int multiplication() {
            return num1 * num2;
        }

        float division() {
            return static_cast<float>(num1) / num2;
        }
};

int main() {
    Arithmetic obj(10, 5);

    cout << "Addition: " << obj.addition() << endl;
    cout << "Subtraction: " << obj.subtraction() << endl;
    cout << "Multiplication: " << obj.multiplication() << endl;
    cout << "Division: " << obj.division() << endl;

    return 0;
}

