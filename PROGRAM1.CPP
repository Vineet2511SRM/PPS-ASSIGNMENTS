#include <iostream>
#include <cstring> // For strcmp()
using namespace std;

const int NUM_BOOKS = 4; // Number of books
char* books[NUM_BOOKS] = {"Dream", "Nightangle", "Fiction", "C++ Core"}; // Array of book names

void storeNames() {   // Function to store book names
    cout << "Books have been stored successfully!" << endl;
}

void displayBooks() {   // Function to display book names
    cout << "\nAvailable Books:\n";
    char** ptr = books; // Pointer to the first book
    for (int i = 0; i < NUM_BOOKS; i++) {
        cout << i + 1 << ". " << *(ptr + i) << endl; // Pointer arithmetic
    }
}

void checkAvailability() {   // Function to check book availability
    char book[50];
    cout << "\nEnter the book name to check availability: ";
    cin.ignore();
    cin.getline(book, 50);

    char** ptr = books; // Pointer to the first book
    for (int i = 0; i < NUM_BOOKS; i++) {
        if (strcmp(*(ptr + i), book) == 0) { // Compare input with stored names
            cout << "Book is available!\n";
            return;
        }
    }
    cout << "Unavailable!\n";
}

int main() {  // Main function
    int choice;
    while (true) { // Infinite loop
        cout << "\nLibrary Menu:\n";
        cout << "1. Store book names\n";
        cout << "2. Display book names\n";
        cout << "3. Check availability\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) { // Switch case
            case 1:
                storeNames();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                checkAvailability();
                break;
            case 4:
                cout << "Exiting program. Have a great day!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}