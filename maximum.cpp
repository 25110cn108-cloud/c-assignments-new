#include <iostream>
using namespace std;

int maximum(int a, int b) {
    if (a > b) 
    return a;
    else
    return b;
}
int main () {
    int result = maximum(5,10);
    cout << "The maximum is: " << result << endl;
    return 0;
}