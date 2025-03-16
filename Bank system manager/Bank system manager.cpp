/* Banking system that manages customer's account 
showing last transaction ,name and account balance*/
 
 /*NAME:NIMROD MUTAI
   REG NO:BSE-05-0178/2024
   BSE GROUP 3*/
   
   #include<iostream>
using namespace std;

// Define the Customer structure
struct Customer {
    string name;
    double accountBalance;
    string lastTransaction;
};

// Function to display customer details
void displayCustomer(const Customer& c) {
    cout << "Customer Name: " << c.name << endl;
    cout << "Account Balance: $" << c.accountBalance << endl;
    cout << "Last Transaction: " << c.lastTransaction << endl;
}

int main() {
    // Create two Customer records
    Customer customer1;
    Customer customer2;

    // Get customer details from user input for customer 1
    cout << "Enter details for customer 1:" << endl;
    cout << "Name: ";
    cin >> customer1.name;  
    cout << "Account Balance: $";
    cin >> customer1.accountBalance;  
    cout << "Last Transaction: ";
    cin >> customer1.lastTransaction;  

    // Get customer details from user input for customer 2
    cout << "\nEnter details for customer 2:" << endl;
    cout << "Name: ";
    cin >> customer2.name;  
    cout << "Account Balance: $";
    cin >> customer2.accountBalance;  
    cout << "Last Transaction: ";
    cin >> customer2.lastTransaction;  

    // Display customer details
    cout << "\nCustomer 1 Details:" << endl;
    displayCustomer(customer1);
    cout << "\nCustomer 2 Details:" << endl;
    displayCustomer(customer2);

    return 0;
}
