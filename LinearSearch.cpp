#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; // Dynamically allocate an array

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Input elements into the array
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    int result = linearSearch(arr, size, key); // Perform linear search
    if (result != -1) {
        cout << "Element found at index: " << result << endl; // Display the index if found
    } else {
        cout << "Element not found in the array." << endl; // Display message if not found
    }
    delete[] arr; // Free the dynamically allocated memory
    return 0;