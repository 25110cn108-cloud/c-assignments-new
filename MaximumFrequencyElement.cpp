#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxFreq = 0, maxElement;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    cout << maxElement;
    return 0;
}