#include <iostream>
#include <string>
using namespace std;

struct Product {
    int productID;
    string productName;
    int quantity;
    float price;
};

int main() {
    int n;

    cout << "Enter the number of products: ";
    cin >> n;

    Product items[n];

    cin.ignore(); // Clear input buffer

    // Input product details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Product " << i + 1 << ":\n";

        cout << "Product ID: ";
        cin >> items[i].productID;
        cin.ignore();

        cout << "Product Name: ";
        getline(cin, items[i].productName);

        cout << "Quantity: ";
        cin >> items[i].quantity;

        cout << "Price: ";
        cin >> items[i].price;
        cin.ignore();
    }

    // Display inventory
    cout << "\n===== INVENTORY DETAILS =====\n";
    cout << "ID\tProduct Name\tQuantity\tPrice\n";

    for (int i = 0; i < n; i++) {
        cout << items[i].productID << "\t"
             << items[i].productName << "\t"
             << items[i].quantity << "\t\t"
             << items[i].price << endl;
    }

    return 0;
}