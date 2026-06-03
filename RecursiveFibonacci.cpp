#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    return ;

    if (n == 1)
    return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;

    cout << "Enter the position:";
    cin >> n;

    cout << "Fibonacci term = " << fibonacci(n);
    return 0;
}