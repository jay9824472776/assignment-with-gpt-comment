#include <iostream>
using namespace std;

class SwapNumbers {
    int a, b;

public:
    SwapNumbers(int x, int y) : a(x), b(y) {}

    friend void swap(SwapNumbers &obj);

    display() {
        cout << "a: " << a << " b: " << b << endl;
    }
};

 swap(SwapNumbers &obj) {
    obj.a = obj.a + obj.b;
    obj

