#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function to compare words by length
bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    int n;

    cout << "Enter the number of words: ";
    cin >> n;

    string words[n];

    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Sort words by length
    sort(words, words + n, compare);

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}