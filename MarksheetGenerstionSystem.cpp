#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string text, word, prev = "";

    cout << "Enter a sentence:\n";
    getline(cin, text);

    map<string, vector<string>> markov;

    // Build the Markov chain
    stringstream ss(text);
    while (ss >> word) {
        markov[prev].push_back(word);
        prev = word;
    }
    markov[prev].push_back("END");

    // Generate text
    cout << "\nGenerated Text:\n";
    string current = "";

    while (true) {
        vector<string> nextWords = markov[current];
        string next = nextWords[rand() % nextWords.size()];

        if (next == "END")
            break;

        cout << next << " ";
        current = next;
    }

    cout << endl;

    return 0;
}