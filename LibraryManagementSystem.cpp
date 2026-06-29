#include <iostream>
#include <string>
using namespace std;

struct Book {
    int bookID;
    string title;
    string author;
    bool issued;
};

int main() {
    int n;

    cout << "Enter the number of books: ";
    cin >> n;

    Book books[n];

    // Input book details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << ":\n";

        cout << "Book ID: ";
        cin >> books[i].bookID;

        cin.ignore();

        cout << "Book Title: ";
        getline(cin, books[i].title);

        cout << "Author Name: ";
        getline(cin, books[i].author);

        books[i].issued = false;
    }

    // Display book records
    cout << "\n===== Library Records =====\n";
    cout << "ID\tTitle\t\tAuthor\t\tStatus\n";

    for (int i = 0; i < n; i++) {
        cout << books[i].bookID << "\t"
             << books[i].title << "\t"
             << books[i].author << "\t"
             << (books[i].issued ? "Issued" : "Available")
             << endl;
    }

    return 0;
}