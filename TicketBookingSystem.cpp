#include <iostream>
using namespace std;

int main() {
    const int TOTAL_SEATS = 10;
    int seats[TOTAL_SEATS] = {0}; // 0 = Available, 1 = Booked
    int choice, seatNo;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. View Available Seats\n";
        cout << "2. Book a Seat\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nSeat Status:\n";
                for (int i = 0; i < TOTAL_SEATS; i++) {
                    cout << "Seat " << i + 1 << ": ";
                    if (seats[i] == 0)
                        cout << "Available\n";
                    else
                        cout << "Booked\n";
                }
                break;

            case 2:
                cout << "Enter seat number (1-" << TOTAL_SEATS << "): ";
                cin >> seatNo;

                if (seatNo < 1 || seatNo > TOTAL_SEATS) {
                    cout << "Invalid seat number!\n";
                } else if (seats[seatNo - 1] == 1) {
                    cout << "Seat already booked!\n";
                } else {
                    seats[seatNo - 1] = 1;
                    cout << "Ticket booked successfully for Seat " << seatNo << ".\n";
                }
                break;

            case 3:
                cout << "Thank you for using the Ticket Booking System.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}