#include <iostream>
using namespace std;

struct Date {
    int month;
    int day;
    int year;
};

int main() {
    Date d;

    cout << "Enter date (mm dd yyyy): ";
    cin >> d.month >> d.day >> d.year;

    cout << "Date: " << d.month << "/" << d.day << "/" << d.year << endl;

    return 0;
}