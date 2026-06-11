#include <iostream>
#include <climits>
using namespace std;
int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN; // Initialize largest to the smallest integer
    int secondLargest = INT_MIN; // Initialize second largest to the smallest integer
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest before updating largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update second largest if current element is greater than second largest and not equal to largest
        }
    }
    return secondLargest; // Return the second largest element
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

    int secondLargest = findSecondLargest(arr, size); // Find the second largest element
    if (secondLargest != INT_MIN) {
        cout << "Second Largest: " << secondLargest << endl; // Display the second largest element
    } else {
        cout << "There is no second largest element." << endl; // Display message if there is no second largest element
    }

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}