#include <iostream>
#include <iomanip> // For decimal precision
using namespace std;

class Doctor {
private: // Private members
    string doc_Name;
    int doc_ID;
    string doc_Specialization;
    int numberOfPatients;
    double fee_consult;
    string date_join;

public: // Public members
    void doc_details() { // Function to store doctor details
        cout << "Enter Doctor Name: ";
        getline(cin, doc_Name);  // Read the entire line

        cout << "Enter Doctor ID: "; // Read the integer
        cin >> doc_ID;
        cin.ignore(); // Ignore newline before using getline

        cout << "Enter Doctor Specialization: ";
        getline(cin, doc_Specialization); // Read the entire line

        cout << "Enter Number of Patients Attended: ";
        cin >> numberOfPatients;

        cout << "Enter Fee for Consultation: ";
        cin >> fee_consult;
        cin.ignore(); // Ignore newline before using getline

        cout << "Enter Date of Joining (DD-MM-YYYY): ";
        getline(cin, date_join); // Read the entire line
    }

    double total_earnings() { // Function to calculate total earnings
        return numberOfPatients * fee_consult;
    }

    void display() { // Function to display doctor details
        cout << "\n--- Doctor Details ---\n";
        cout << "Doctor Name          : " << doc_Name << endl;
        cout << "Doctor ID            : " << doc_ID << endl;
        cout << "Specialization       : " << doc_Specialization << endl;
        cout << "Number of Patients   : " << numberOfPatients << endl;
        cout << "Consultation Fee     : Rs. " << fixed << setprecision(2) << fee_consult << endl; // Set decimal precision
        cout << "Date of Joining      : " << date_join << endl;

        // Display total earnings
        double earnings = total_earnings();
        cout << "Total Earnings       : Rs. " << fixed << setprecision(2) << earnings << endl;

        // Check if the doctor earns more than Rs. 50,000 per month
        if (earnings > 50000) {
            cout << "Doctor earns more than Rs. 50,000 per month.\n";
        } else {
            cout << "Doctor earns less than Rs. 50,000 per month.\n";
        }
    }
};

int main() { // Main function
    Doctor dc; // Create an object of the Doctor class
    dc.doc_details(); // Call the function to store doctor details
    dc.display(); // Call the function to display doctor details
    return 0;
}

// SAMPLE INPUT 1
// Enter Doctor Name: Dr. Ramesh Kumar  
//Enter Doctor ID: 101  
//Enter Doctor Specialization: Cardiology  
//Enter Number of Patients Attended: 120  
//Enter Fee for Consultation: 500  
//Enter Date of Joining (DD-MM-YYYY): 10-02-2015 

// SAMPLE OUTPUT 1
// --- Doctor Details ---
// Doctor Name          : Dr. Ramesh Kumar
// Doctor ID            : 101
// Specialization       : Cardiology
// Number of Patients   : 120
// Consultation Fee     : Rs. 500.00
// Date of Joining      : 10-02-2015
// Total Earnings       : Rs. 60000.00
// Doctor earns more than Rs. 50,000 per month.

// SAMPLE INPUT 2
// Enter Doctor Name: Dr. Sunita Sharma
// Enter Doctor ID: 102
// Enter Doctor Specialization: Pediatrics
// Enter Number of Patients Attended: 80
// Enter Fee for Consultation: 400
// Enter Date of Joining (DD-MM-YYYY): 15-07-2018

// SAMPLE OUTPUT 2
// --- Doctor Details ---
// Doctor Name          : Dr. Sunita Sharma
// Doctor ID            : 102
// Specialization       : Pediatrics
// Number of Patients   : 80
// Consultation Fee     : Rs. 400.00
// Date of Joining      : 15-07-2018
// Total Earnings       : Rs. 32000.00
// Doctor earns less than Rs. 50,000 per month.



