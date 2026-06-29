#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<"Enter a sentence: ";
    getline(cin, s);
    int totalWords=0;
    for (int i=0;i<s.length();i++) {
        if (s[i]!=' ') {
            if (i==0||s[i-1]==' ') {
                totalWords++;
            }
        }
    }
    cout<<"Total number of words: "<<totalWords<< endl;
    return 0;
}