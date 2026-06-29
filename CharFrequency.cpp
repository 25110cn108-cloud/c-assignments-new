#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Character frequency:" << endl;
    for (int i = 0; i < str.length(); i++) {
        int count = 1;
        bool alreadyCounted = false;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted) {
            continue;
        }
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        cout << str[i] << " : " << count << endl;
    }
    return 0;
}   