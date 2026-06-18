#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cin >> n1;
    int arr1[100];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cin >> n2;
    int arr2[100];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    cout << "Union of arrays: ";
    for (int i = 0; i < n1; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << arr1[i] << " ";
        }
    }
    for (int i = 0; i < n2; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                isDuplicate = true;
                break;

            }
        }
        if (!isDuplicate) {
            cout << arr2[i] << " ";
        }
    }
    return 0;
}