#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empID;
    string name;
    string department;
    float salary;
};

int main() {
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    Employee emp[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";

        cout << "Employee ID: ";
        cin >> emp[i].empID;

        cout << "Name: ";
        cin >> emp[i].name;

        cout << "Department: ";
        cin >> emp[i].department;

        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    // Display employee records
    cout << "\n===== Employee Records =====\n";
    cout << "ID\tName\tDepartment\tSalary\n";

    for (int i = 0; i < n; i++) {
        cout << emp[i].empID << "\t"
             << emp[i].name << "\t"
             << emp[i].department << "\t\t"
             << emp[i].salary << endl;
    }

    return 0;
}