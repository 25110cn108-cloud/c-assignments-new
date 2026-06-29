#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empID;
    string name;
    float basicSalary, hra, da, netSalary;
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

        cout << "Basic Salary: ";
        cin >> emp[i].basicSalary;

        // Calculate HRA and DA
        emp[i].hra = 0.20 * emp[i].basicSalary; // 20% HRA
        emp[i].da = 0.10 * emp[i].basicSalary;  // 10% DA

        // Calculate Net Salary
        emp[i].netSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    // Display employee salary details
    cout << "\n===== Salary Report =====\n";
    cout << "ID\tName\tBasic\tHRA\tDA\tNet Salary\n";

    for (int i = 0; i < n; i++) {
        cout << emp[i].empID << "\t"
             << emp[i].name << "\t"
             << emp[i].basicSalary << "\t"
             << emp[i].hra << "\t"
             << emp[i].da << "\t"
             << emp[i].netSalary << endl;
    }

    return 0;
}