#include <iostream>
using namespace std;
int findFrequency(int arr[], int size, int key) {
    int count = 0; // Initialize count to 0
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++; // Increment count if the current element matches the key
        }
    }
    return count; // Return the frequency of the key in the array
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
    cout << "Enter the element to find its frequency: ";
    cin >> key;
    int frequency = findFrequency(arr, size, key); // Find the frequency of the key
    cout << "Frequency of " << key << ": " << frequency << endl; // Display the frequency

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}