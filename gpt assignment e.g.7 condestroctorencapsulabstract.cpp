#include <iostream>
using namespace std;

class Date {
    private:
        int day, month, year;

    public:
        // Constructor to initialize date
        Date(int d, int m, int y) : day(d), month(m), year(y) {}

        bool validate() {
            if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) {
                return false;
            }
            return true;
        }

         displayDate() {
            if (validate()) {
                cout << "Date: " << day << "/" << month << "/" << year << endl;
            } else {
                cout << "Invalid Date" << endl;
            }
        }
};

int main() {
    Date date(30, 2, 2024);
    date.displayDate();

    return 0;
}

