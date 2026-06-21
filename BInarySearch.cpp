#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter elemnt to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int found = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            low = mid + 1;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (found != -1)
    cout << "Enter found at index " << found;
    else
    cout << "Enter not found" ;
    return 0;
}