#include "student.h"

        // Student::Student (int studentID, string firstName) {};

        Student::Student (string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[], Degree degreeType)
        { 
            this -> studentID = studentID;
            this -> firstName = firstName;
            this -> lastName = lastName;
            this -> email = email;
            this -> age = age;
            this -> degreeType = degreeType;
            setNumOfDaysToCompleteCourse(NumOfDaysToCompleteCourse);
        };
        Student::~Student () {}
        string Student::getID () { return  this -> studentID; };
        string Student::getFirstName () { return this -> firstName; };
        string Student::getLastName () { return this -> lastName; };
        string Student::getEmail () { return this -> email; };
        int Student::getAge () { return this -> age; };
        int * Student::getNumOfDaysToCompleteCourse () { return numOfDaysToCompleteCourse; };
        void Student::print() {
            cout << "First Name: "     << this -> firstName << "\t"
                 << "Last Name: "      << this -> lastName  << "\t"
                 << "Age: "            << this -> age       << "\t"
                 << "daysInCourse: {"  << this -> numOfDaysToCompleteCourse[0] << ", " << this -> numOfDaysToCompleteCourse[1] << ", " << this -> numOfDaysToCompleteCourse[2] << "} "
                 << "Degree Program: " << this -> degreeType << endl;
        }

        void Student::setID (int id) { this -> studentID = id; };
        void Student::setFirstName (string firstName) { this -> firstName = firstName; };
        void Student::setLastName (string lastName) { this -> lastName = lastName; };
        void Student::setEmail (string email) { this -> email = email; };
        void Student::setAge (int age) { this -> age = age; };
        void Student::setNumOfDaysToCompleteCourse (int *numOfDays, int courses) { 
            for (unsigned i = 0; i < courses; i++) {
                this -> numOfDaysToCompleteCourse[i] = numOfDays[i];
            }
        };