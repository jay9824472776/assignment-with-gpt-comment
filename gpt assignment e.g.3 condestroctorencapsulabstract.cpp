#include <iostream>
using namespace std;

class Car {
    private:
        string company;
        string model;
        int year;

    public:
        // Setters
        void setCompany(string c) {
            company = c;
        }

        void setModel(string m) {
            model = m;
        }

        void setYear(int y) {
            year = y;
        }

        // Getters
        string getCompany() {
            return company;
        }

        string getModel() {
            return model;
        }

        int getYear() {
            return year;
        }
};

int main() {
    Car car;

    // Set the values
    car.setCompany("Toyota");
    car.setModel("Corolla");
    car.setYear(2020);

    // Display the values
    cout << "Car Company: " << car.getCompany() << endl;
    cout << "Car Model: " << car.getModel() << endl;
    cout << "Car Year: " << car.getYear() << endl;

    return 0;
}

