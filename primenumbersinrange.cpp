#include <iostream>
using namespace std;
int main() {
    int start, end, i, j;
    bool isPrime;

    cout << "Enter startimg number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (i = start; i<= end; i++) {
        if (i <= 1)
        continue;

        isPrime = true;

        for (j = 2;j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
    if (isPrime)
    cout << i << " ";
}
return 0;
}