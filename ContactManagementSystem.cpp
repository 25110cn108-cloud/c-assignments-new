#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

int main() {
    int n;

    cout << "Enter the number of contacts: ";
    cin >> n;

    Contact contacts[n];

    cin.ignore(); // Clear input buffer

    // Input contact details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Contact " << i + 1 << ":\n";

        cout << "Name: ";
        getline(cin, contacts[i].name);

        cout << "Phone Number: ";
        getline(cin, contacts[i].phone);

        cout << "Email: ";
        getline(cin, contacts[i].email);
    }

    // Display all contacts
    cout << "\n===== Contact List =====\n";
    cout << "Name\t\tPhone Number\t\tEmail\n";

    for (int i = 0; i < n; i++) {
        cout << contacts[i].name << "\t"
             << contacts[i].phone << "\t"
             << contacts[i].email << endl;
    }

    return 0;
}