#include <iostream>
using namespace std;

class Matrix {
    int arr[5];
public:
     setData(int a[]) {
        for (int i = 0; i < 5; i++) {
            arr[i] = a[i];
        }
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

     display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {5, 4, 3, 2, 1};
    
    m1.setData(arr1);
    m2.setData(arr2);
    m3 = m1 + m2;
    
    m3.display();
}

