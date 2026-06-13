#include <iostream>
using namespace std;

struct Employee {
    int empNo;
    float salary;
};

void display(Employee e) {
    cout << "Employee No: " << e.empNo << endl;
    cout << "Salary: $" << e.salary << endl;
    cout << "------------------------" << endl;
}

int main() {
    Employee e1, e2, e3;

    cout << "Enter details for Employee 1 (no salary): ";
    cin >> e1.empNo >> e1.salary;

    cout << "Enter details for Employee 2 (no salary): ";
    cin >> e2.empNo >> e2.salary;

    cout << "Enter details for Employee 3 (no salary): ";
    cin >> e3.empNo >> e3.salary;

    display(e1);
    display(e2);
    display(e3);

    return 0;
}