#pragma once
#include "degree.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int numOfDaysToCompleteCourse[3];
	Degree degreeType;

public:
	Student();
	Student(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[3], Degree degreeType);
	~Student();
	string getID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int * getNumOfDaysToCompleteCourse();
	virtual int getDegreeProgram() { return this->degreeType; }
	virtual void print();

	void setID(int ID);
	void setFirstName(string firstName);
	void setLastName(string LastName);
	void setEmail(string Email);
	void setAge(int age);
	void setNumOfDaysToCompleteCourse(int *numOfDays, int courses = 3);
};