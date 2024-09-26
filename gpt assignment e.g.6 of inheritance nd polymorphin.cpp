#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 1;

protected:
    int protectedVar = 2;

public:
    int publicVar = 3;
};

class Derived : public Base {
public:
    display() {
        // cout << "Private Variable: " << privateVar << endl;  // Not accessible
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    Derived d;
    d.display();
}

