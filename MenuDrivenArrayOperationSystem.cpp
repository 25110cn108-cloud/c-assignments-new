#include <iostream>
using namespace std;

int main() {
    int n, choice, key;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Search an Element\n";
        cout << "3. Find Maximum Element\n";
        cout << "4. Find Minimum Element\n";
        cout << "5. Find Sum of Elements\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                cout << "Enter element to search: ";
                cin >> key;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == key) {
                            cout << "Element found at position " << i + 1 << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Element not found.\n";
                }
                break;

            case 3:
                {
                    int max = arr[0];
                    for (int i = 1; i < n; i++)
                        if (arr[i] > max)
                            max = arr[i];
                    cout << "Maximum Element = " << max << endl;
                }
                break;

            case 4:
                {
                    int min = arr[0];
                    for (int i = 1; i < n; i++)
                        if (arr[i] < min)
                            min = arr[i];
                    cout << "Minimum Element = " << min << endl;
                }
                break;

            case 5:
                {
                    int sum = 0;
                    for (int i = 0; i < n; i++)
                        sum += arr[i];
                    cout << "Sum of Elements = " << sum << endl;
                }
                break;

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}