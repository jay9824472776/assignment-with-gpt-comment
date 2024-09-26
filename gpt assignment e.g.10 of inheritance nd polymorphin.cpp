#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;
public:
    setData(string s) {
        str = s;
    }

    MyString operator+(MyString s) {
        MyString temp;
        temp.str = str + s.str;
        return temp;
    }

    display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1, s2, s3;
    s1.setData("Hello ");
    s2.setData("World");
    s3 = s1 + s2;
    s3.display();
}

