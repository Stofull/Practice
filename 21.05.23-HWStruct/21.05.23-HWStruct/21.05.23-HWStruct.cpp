#include <iostream>
#include <string>
using namespace std;
class Student {
private:
     string fullName;
     string dateOfBirth;
     string phoneNumber;
     string city;
     string country;
     string institutionName;
     string institutionCity;
     string institutionCountry;
     string groupNumber;

public:
    Student() {}
    void setFullName(const string& name) {
        fullName = name;
    }
     string getFullName() const {
        return fullName;
    }
    void setDateOfBirth(const string& dob) {
        dateOfBirth = dob;
    }
     string getDateOfBirth() const {
        return dateOfBirth;
    }
    void setPhoneNumber(const string& phone) {
        phoneNumber = phone;
    }
     string getPhoneNumber() const {
        return phoneNumber;
    }
    void setCity(const string& studentCity) {
        city = studentCity;
    }
     string getCity() const {
        return city;
    }
    void setCountry(const string& studentCountry) {
        country = studentCountry;
    }
     string getCountry() const {
        return country;
    }
    void setInstitutionName(const string& name) {
        institutionName = name;
    }
     string getInstitutionName() const {
        return institutionName;
    }
    void setInstitutionCity(const string& instCity) {
        institutionCity = instCity;
    }
     string getInstitutionCity() const {
        return institutionCity;
    }
    void setInstitutionCountry(const string& instCountry) {
        institutionCountry = instCountry;
    }
     string getInstitutionCountry() const {
        return institutionCountry;
    }
    void setGroupNumber(const string& group) {
        groupNumber = group;
    }
     string getGroupNumber() const {
        return groupNumber;
    }
    void enterData() {
         cout << "Enter student full name: ";
         getline(cin, fullName);
         cout << "Enter student's date of birth: ";
         getline(cin, dateOfBirth);
         cout << "Enter the student's contact number: ";
         getline(cin, phoneNumber);
         cout << "Enter student's city: ";
         getline(cin, city);
         cout << "Enter student's country: ";
         getline(cin, country);
         cout << "Enter the name of the educational institution: ";
         getline(cin, institutionName);
         cout << "Enter the city of the educational institution: ";
         getline(cin, institutionCity);
         cout << "Enter the country of the educational institution: ";
         getline(cin, institutionCountry);
         cout << "Enter student group number: ";
         getline(cin, groupNumber);
    }
    void displayData() const {
         cout << "Student's name: " << fullName <<  endl;
         cout << "Date of Birth: " << dateOfBirth <<  endl;
         cout << "Contact number: " << phoneNumber <<  endl;
         cout << "City: " << city <<  endl;
         cout << "A country: " << country <<  endl;
         cout << "The name of the institution: " << institutionName <<  endl;
         cout << "City of educational institution: " << institutionCity <<  endl;
         cout << "School country: " << institutionCountry <<  endl;
         cout << "Group number: " << groupNumber <<  endl;
    }
};
int main() {
    Student student;
    student.enterData();
    cout << "Student Data:" << endl;
    student.displayData();
    return 0;
}