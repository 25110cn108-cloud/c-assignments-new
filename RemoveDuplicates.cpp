#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";

    for (int i = 0; i < str.length(); i++) {
        bool alreadyExists = false;

        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                alreadyExists = true;
                break;
            }
        }

        if (!alreadyExists) {
            result += str[i];
        }
    }

    cout << "String after removing duplicates: " << result << endl;
    return 0;
}