#include <iostream>
using namespace std;
int main() {
    int num,originalNum,remainder,
    reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    if (originalNum == reverse) {
        cout << "Palinrome Number" << endl;
    } else {
        cout << "Not a palindrome Number" << endl;
    }
    return 0;



}