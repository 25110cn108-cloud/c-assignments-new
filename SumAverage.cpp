#include <iostream>
using namespace std;
void findSumAndAverage(int arr[], int size, int &sum, double &average) {
    sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to the sum
    }
    average = static_cast<double>(sum) / size; // Calculate average
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

    int sum;
    double average;
    findSumAndAverage(arr, size, sum, average); // Calculate sum and average

    cout << "Sum: " << sum << endl; // Display the sum
    cout << "Average: " << average << endl; // Display the average

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}