//program to define details of a car using class and its functions
/* Name:Nimrod Mutai
   Reg NO:BSE-05-0178/2024
   Date:30/01/2025 */


#include <iostream>
using namespace std;

// Define the Car class
class Car {
public:
    
    string brand;
    string model;
    float price;
    int mileage;

    // Function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Function  drive
    void drive(int distance) {
        mileage += distance;
        cout << "The car has been driven " << distance << " miles." << endl;
        cout << "Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.mileage = 5000;

    // Display car details
    cout << "Car Details:" << endl;
    myCar.display();
    cout << endl;

    // Drive the car for 150 miles and display updated mileage
    myCar.drive(150);
    cout << endl;

    // Drive the car for 300 miles and display updated mileage
    myCar.drive(300);

    return 0;
}