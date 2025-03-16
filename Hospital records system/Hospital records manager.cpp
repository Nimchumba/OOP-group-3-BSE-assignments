/*Hospital record system that keeps records of patients 
   including their names,diagnosis and age*/
   
   /*NAME:NIMROD MUTAI
   REG NO:BSE-05-0178/2024
   BSE GROUP 3*/
   
   #include<iostream>
using namespace std;

// Define the Patient structure
struct Patient {
    string name;
    int age;
    string diagnosis;
};

// Function to display patient details
void displayPatient(const Patient& p) {
    cout << "Patient Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
}


int main() {
    // Create two Patient records
    Patient patient1;
    Patient patient2;

    // Get patient details from user input for patient 1
    cout << "Enter details for patient 1:" << endl;
    cout << "Name: ";
    cin >> patient1.name; 
    cout << "Age: ";
    cin >> patient1.age;  
    cout << "Diagnosis: ";
    cin >> patient1.diagnosis; 
    
    // Get patient details from user input for patient 2
    cout << "Enter details for patient 2:" << endl;
    cout << "Name: ";
    cin >> patient2.name;  
    cout << "Age: ";
    cin >> patient2.age;   
    cout << "Diagnosis: ";
    cin >> patient2.diagnosis; 
    
    // Display patient details
    cout << "\nPatient 1 Details:" << endl;
    displayPatient(patient1);
    cout << "\nPatient 2 Details:" << endl;
    displayPatient(patient2);

    return 0;
}
