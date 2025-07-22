#include <iostream>
#include <iomanip> // For decimal precision
using namespace std;

class Doctor {
private:
    string doc_Name;
    int doc_ID;
    string doc_Specialization;
    int numberOfPatients;
    double fee_consult;
    string date_join;

    const double EARNING_THRESHOLD = 50000.0; // Constant for salary check

public:
    void input_details() {
        cout << "👨‍⚕️ Enter Doctor's Full Name: ";
        getline(cin, doc_Name);

        cout << "🆔 Enter Doctor ID: ";
        cin >> doc_ID;
        cin.ignore(); // flush newline

        cout << "🩺 Enter Specialization: ";
        getline(cin, doc_Specialization);

        cout << "👥 Number of Patients Attended: ";
        cin >> numberOfPatients;

        cout << "💰 Fee per Consultation (in ₹): ";
        cin >> fee_consult;
        cin.ignore();

        cout << "📅 Date of Joining (DD-MM-YYYY): ";
        getline(cin, date_join);
    }

    double total_earnings() const {
        return numberOfPatients * fee_consult;
    }

    void display() const {
        cout << "\n===== 👨‍⚕️ Doctor Details Summary =====\n";
        cout << left << setw(25) << "Doctor Name:" << doc_Name << endl;
        cout << left << setw(25) << "Doctor ID:" << doc_ID << endl;
        cout << left << setw(25) << "Specialization:" << doc_Specialization << endl;
        cout << left << setw(25) << "Patients Attended:" << numberOfPatients << endl;
        cout << left << setw(25) << "Consultation Fee:" << "Rs. " << fixed << setprecision(2) << fee_consult << endl;
        cout << left << setw(25) << "Date of Joining:" << date_join << endl;

        double earnings = total_earnings();
        cout << left << setw(25) << "Total Earnings:" << "Rs. " << fixed << setprecision(2) << earnings << endl;

        cout << left << setw(25) << "Monthly Evaluation:";
        if (earnings > EARNING_THRESHOLD) {
            cout << "✅ Earns more than ₹50,000/month\n";
        } else {
            cout << "❌ Earns less than ₹50,000/month\n";
        }

        cout << "========================================\n";
    }
};

int main() {
    Doctor dc;
    dc.input_details();
    dc.display();
    return 0;
}
