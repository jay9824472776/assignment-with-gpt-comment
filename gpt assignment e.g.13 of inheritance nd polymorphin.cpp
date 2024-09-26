#include <iostream>
using namespace std;

class Numbers {
    int num1, num2;

public:
    Numbers(int x, int y) : num1(x), num2(y) {}

    // Friend function declaration
    friend int findMax(Numbers obj);

    display() {
        cout << "Number 1: " << num1 << " Number 2: " << num2 << endl;
    }
};

// Friend function to find the maximum of two numbers
int findMax(Numbers obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    Numbers obj(10, 20);
    obj.display();

    cout << "Maximum Number: " << findMax(obj) << endl;
    return 0;
}

