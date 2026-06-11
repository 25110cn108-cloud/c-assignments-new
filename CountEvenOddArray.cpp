#include <iostream>
using namespace std;
void countEvenOdd(int arr[], int size, int &evenCount, int &oddCount) {
    evenCount = 0; // Initialize even count to 0
    oddCount = 0; // Initialize odd count to 0
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count if the element is even
        } else {
            oddCount++; // Increment odd count if the element is odd
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

    int evenCount, oddCount;
    countEvenOdd(arr, size, evenCount, oddCount); // Count even and odd numbers

    cout << "Even count: " << evenCount << endl; // Display the count of even numbers
    cout << "Odd count: " << oddCount << endl; // Display the count of odd numbers

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}