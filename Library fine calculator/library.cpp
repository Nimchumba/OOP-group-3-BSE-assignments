//library programming to calculate fine for overdue books
/*Author:Nimrod Mutai
 Reg no:BSE-05-0178/2024
  date:Jan 21 2024 */
  
#include <iostream>

using namespace std;

int main() {
    // Declare necessary variables
    int bookID;
    int dueDate, returnDate, daysOverdue;
    double fine = 0.0;

    // Take inputs
    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Due Date (in days format, e.g., 10 for 10th day of the month): ";
    cin >> dueDate;

    cout << "Enter Return Date (in days format, e.g., 15 for 15th day of the month): ";
    cin >> returnDate;

    // Calculate the number of days overdue
    daysOverdue = returnDate - dueDate;

    // If daysOverdue is negative, the book was returned early, no fine
    if (daysOverdue < 0) {
        daysOverdue = 0;
        fine = 0.0;
    } else {
        // Apply fine rates based on the number of days overdue
        if (daysOverdue >= 1 && daysOverdue <= 7) {
            fine = daysOverdue * 20;  // Ksh. 20 per day for 1 to 7 days
        } else if (daysOverdue >= 8 && daysOverdue <= 14) {
            fine = daysOverdue * 50;  // Ksh. 50 per day for 8 to 14 days
        } else if (daysOverdue >= 15) {
            fine = daysOverdue * 100; // Ksh. 100 per day for 15 or more days
        }
    }

    // Display results
    cout << "\nBook ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine: Ksh. " << fine << endl;

    return 0;
}
