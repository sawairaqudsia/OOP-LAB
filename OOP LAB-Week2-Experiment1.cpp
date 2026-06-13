#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNo;
    int m1, m2, m3;
    int total;
};

int main() {
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter 3 subject marks: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    s.total = s.m1 + s.m2 + s.m3;

    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.m1 << ", " << s.m2 << ", " << s.m3 << endl;
    cout << "Total: " << s.total << endl;

    return 0;
}