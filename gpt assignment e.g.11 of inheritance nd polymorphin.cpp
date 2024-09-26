#include <iostream>
using namespace std;

class Area {
public:
    float area(float r) {  // Circle
        return 3.1416 * r * r;
    }

    float area(float l, float b) {  // Rectangle
        return l * b;
    }

    float area(float base, float height, int) {  // Triangle
        return 0.5 * base * height;
    }
};

int main() {
    Area a;
    cout << "Area of Circle: " << a.area(5) << endl;
    cout << "Area of Rectangle: " << a.area(5, 6) << endl;
    cout << "Area of Triangle: " << a.area(5, 6, 0) << endl;
}

