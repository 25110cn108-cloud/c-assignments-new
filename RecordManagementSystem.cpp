#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    Student s[n];

    // Input student records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Display student records
    cout << "\n===== Student Records =====\n";
    cout << "Roll No\tName\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << s[i].rollNo << "\t"
             << s[i].name << "\t"
             << s[i].marks << endl;
    }

    return 0;
}