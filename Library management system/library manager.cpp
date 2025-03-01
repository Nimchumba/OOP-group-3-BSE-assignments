/*creating simple library system that includes base class person 
and derived class library members showcasing inheritance*/

/* NAME:NIMROD MUTAI
   REG NO:BSE-O5-0178/2024
   BSE GROUP 3*/ 



#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;  

public:
    // Public member function to set the name
    void setName(string n) {
        name = n;
    }

    // Public member function to get the name
    string getName() const {
        return name;
    }
};

// Derived class LibraryMember inheriting from Person
class LibraryMember : public Person {
private:
    int memberID;  
    int booksBorrowed;  

public:
    // Constructor 
    LibraryMember(string n, int id, int books) {
        setName(n);  
        memberID = id;
        booksBorrowed = books;
    }

    // Public member function to get the member ID
    int getMemberID() const {
        return memberID;
    }

    // Public member function to get the number of borrowed books
    int getBooksBorrowed() const {
        return booksBorrowed;
    }
};

// Derived class PremiumMember inheriting from LibraryMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;  

public:
    // Constructor 
    PremiumMember(string n, int id, int books, double fee) 
        : LibraryMember(n, id, books) {  
        membershipFee = fee;
    }

    // Public member function to get the membership fee
    double getMembershipFee() const {
        return membershipFee;
    }
};

int main() {
    
    PremiumMember premium("Steven Strange", 16723, 8, 1000.00);

    cout << "Name: " << premium.getName() << endl;
    cout << "Member ID: " << premium.getMemberID() << endl;
    cout << "Books Borrowed: " << premium.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << premium.getMembershipFee() << endl;

    return 0;
}
