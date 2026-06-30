#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

int empID[MAX];
string empName[MAX];
float empSalary[MAX];
int total = 0;

// Function to add employees
void addEmployee() {
    int n;
    cout << "Enter number of employees to add: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << total + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> empID[total];

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName[total]);

        cout << "Enter Salary: ";
        cin >> empSalary[total];

        total++;
    }
}

// Function to display employees
void displayEmployee() {
    if (total == 0) {
        cout << "\nNo employee records found.\n";
        return;
    }

    cout << "\n----- Employee Records -----\n";
    cout << "ID\tName\t\tSalary\n";

    for (int i = 0; i < total; i++) {
        cout << empID[i] << "\t" << empName[i] << "\t\t" << empSalary[i] << endl;
    }
}

// Function to search employee by ID
void searchEmployee() {
    int id;
    cout << "\nEnter Employee ID to search: ";
    cin >> id;

    for (int i = 0; i < total; i++) {
        if (empID[i] == id) {
            cout << "\nEmployee Found\n";
            cout << "ID: " << empID[i] << endl;
            cout << "Name: " << empName[i] << endl;
            cout << "Salary: " << empSalary[i] << endl;
            return;
        }
    }

    cout << "Employee not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployee();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}