#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "Constructor of Class A\n"; }
};

class B : public A {
public:
    B() { cout << "Constructor of Class B\n"; }
};

class C : public B {
public:
    C() { cout << "Constructor of Class C\n"; }
};

int main() {
    C obj;  // Constructor chaining
}

