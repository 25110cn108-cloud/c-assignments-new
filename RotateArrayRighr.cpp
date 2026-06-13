#include <iostream>
using namespace std;
int main() {
    int n, d;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate right: ";
    cin >> d;
    d = d % n;
    for(int i = 0; i < d; i++) {
        int last = arr[n - 1];
        for(int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
    cout << "Array after right rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}