#include <iostream>
using namespace std;
int main () {
    int start, end;

    cout << "Enter starting number: ";
    cin >> end;

    cout << "Enter ending number; ";
    cin >> end;

    cout << " Armstrong numbers between "
    << start << " and " << end << " are:\n";

for (int num = start; num <=end; num++) {

    int originalNum = num;
    int sum = 0, remainder;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (sum == num)
    cout << num << " ";
}
return 0;
}