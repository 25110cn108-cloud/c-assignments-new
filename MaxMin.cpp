#include <iostream>
using namespace std;
void findMaxAndMin(int arr[], int size, int &max, int &min) {
    max = arr[0]; // Initialize max to the first element
    min = arr[0]; // Initialize min to the first element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }
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

    int max, min;
    findMaxAndMin(arr, size, max, min); // Calculate max and min

    cout << "Maximum: " << max << endl; // Display the maximum
    cout << "Minimum: " << min << endl; // Display the minimum

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}
