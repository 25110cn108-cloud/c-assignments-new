#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    int choice;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    do {
        cout << "\n===== MENU-DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Find Length of Strings\n";
        cout << "2. Concatenate Strings\n";
        cout << "3. Compare Strings\n";
        cout << "4. Reverse First String\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length of First String: " << str1.length() << endl;
                cout << "Length of Second String: " << str2.length() << endl;
                break;

            case 2:
                cout << "Concatenated String: " << str1 + " " + str2 << endl;
                break;

            case 3:
                if (str1 == str2)
                    cout << "Both strings are equal." << endl;
                else
                    cout << "Strings are not equal." << endl;
                break;

            case 4:
                reverse(str1.begin(), str1.end());
                cout << "Reversed First String: " << str1 << endl;
                break;

            case 5:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}