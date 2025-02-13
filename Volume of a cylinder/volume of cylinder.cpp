//Funtion to calculate volume of a cylinder
/*Author:Nimrod Mutai
  Reg NO:BSE-05-0178/2024
  DATE: 22/01/2025*/
  
#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the volume of a cylinder
double calculateVolume(double height, double pi, double radius) {
    return height * pow(radius, 2) * pi;
}

int main() {
    double pi = 3.142, volume;
    float height, radius;

    cout << "Enter the height and radius: " << endl;
    cin >> height >> radius;

    // Calling the function and storing the result in 'volume'
    volume = calculateVolume(height, pi, radius);

    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
