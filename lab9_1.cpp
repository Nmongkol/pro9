#include<iostream>
#include<iomanip> // For using setw(), setprecision(), ...
using namespace std;

int main() {
    double loanAmount, interestRate, annualPayment;
    
    // Take user input
    cout << "Enter initial loan: ";
    cin >> loanAmount;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> annualPayment;

    // Use 'setw' to set width of table and 'left' to set left-alignment
    // Adjust the table formatting for clarity
    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    // Set precision and fixed-point display for monetary values
    cout << fixed << setprecision(2); 

    int year = 1;
    while (loanAmount > 0) {
        double interest = loanAmount * (interestRate / 100);
        double totalAmount = loanAmount + interest;
        double payment = (totalAmount < annualPayment) ? totalAmount : annualPayment;  // Ensure payment doesn't exceed remaining balance
        double newBalance = totalAmount - payment;

        // Display the values for the current year
        cout << setw(13) << left << year; 
        cout << setw(13) << left << loanAmount; 
        cout << setw(13) << left << interest; 
        cout << setw(13) << left << totalAmount;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;
        cout << "\n";

        // Update the loan amount for the next year
        loanAmount = newBalance;
        year++;
    }

    return 0;
}