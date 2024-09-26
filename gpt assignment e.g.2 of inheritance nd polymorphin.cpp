#include <iostream>
using namespace std;

class Shape {
    // Base class for different shapes
};

class Rectangle : public Shape {
    float length, breadth;

public:
    setData(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    rect.setData(5, 3);
    cout << "Area of Rectangle: " << rect.area() << endl;
}

