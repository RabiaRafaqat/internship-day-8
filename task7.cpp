#include <iostream>
using namespace std;

int main() {
    double hourlyRate, hoursWorked, grossPay;

    // Input hourly rate and hours worked
    cout << "Enter the hourly rate: $";
    cin >> hourlyRate;
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    // Calculate gross pay
    if (hoursWorked > 40) {
        grossPay = 40 * hourlyRate + (hoursWorked - 40) * (hourlyRate * 1.5);
    } else {
        grossPay = hoursWorked * hourlyRate;
    }

    // Output the gross pay
    cout << "Gross Pay: $" << grossPay << endl;

    return 0;
}