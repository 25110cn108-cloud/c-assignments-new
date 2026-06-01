#include <iostream>
using namespace std;
int main() {
    int num, temp, digit,sum = 0;

    cout << "Enter a number:";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        int fact = 1;
        for (int i = 1; i <=digit; i++) {
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
    cout << num << " is a strong Number.";
    else
cout << num << " is not a strong number.";
return 0;
}