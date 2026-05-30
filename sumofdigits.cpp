#include<iostream>
using namespace std;
int main() {
    int num, digit, sum = 0;
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "Sum of digits = " << sum <<
    endl;

    return 0;
}