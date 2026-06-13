#include <iostream>
using namespace std;

struct Employee {
    int empNo;
    float compensation;
};

void display(Employee e) {
    cout << "Employee No: " << e.empNo << endl;
    cout << "Compensation: $" << e.compensation << endl;
    cout << "------------------------" << endl;
}

int main() {
    Employee e1 = { 1, 5000 };
    Employee e2 = { 2, 6000 };
    Employee e3 = { 3, 7000 };

    display(e1);
    display(e2);
    display(e3);

    return 0;
}