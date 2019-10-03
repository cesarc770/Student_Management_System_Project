#include "student.h"

Student::Student () {};

Student::Student(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[], Degree degreeType)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->degreeType = degreeType;
	setNumOfDaysToCompleteCourse(NumOfDaysToCompleteCourse);
};
Student::~Student() {}

//Getters for Student
string Student::getID() { return  this->studentID; };
string Student::getFirstName() { return this->firstName; };
string Student::getLastName() { return this->lastName; };
string Student::getEmail() { return this->email; };
int Student::getAge() { return this->age; };
int * Student::getNumOfDaysToCompleteCourse() { return numOfDaysToCompleteCourse; };

//Setters for Student
void Student::setID(int id) { this->studentID = id; };
void Student::setFirstName(string firstName) { this->firstName = firstName; };
void Student::setLastName(string lastName) { this->lastName = lastName; };
void Student::setEmail(string email) { this->email = email; };
void Student::setAge(int age) { this->age = age; };
void Student::setNumOfDaysToCompleteCourse(int *numOfDays, int courses) {
	for (int i = 0; i < courses; i++) {
		this -> numOfDaysToCompleteCourse[i] = numOfDays[i];
	}
};

//prints each student in a row format
void Student::print() {
	cout << setw(11) << this->studentID 
		<< setw(14) << this->firstName 
		<< setw(14) << this->lastName 
		<< setw(25) << this->email
		<< setw(6) << this->age
		<< setw(9)<< this->numOfDaysToCompleteCourse[0] << setw(9) << this->numOfDaysToCompleteCourse[1] << setw(9) << this->numOfDaysToCompleteCourse[2]
		<< setw(12) << this->degreeType << endl;
}
