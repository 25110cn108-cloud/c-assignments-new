#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << arr[i] << " " << arr[j] << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
        if (!found) {
            cout << "No pair found";
        }
        return 0;
    
}