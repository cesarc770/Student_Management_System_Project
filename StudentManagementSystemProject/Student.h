#pragma once
#include "degree.h"
#include <iostream>
#include <string>
#include <vector>
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
	// Student (int studentID, string firstName);
	Student(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[3], Degree degreeType);
	~Student();
	string getID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int * getNumOfDaysToCompleteCourse();
	// virtual int getDegreeProgram ();
	virtual void print();

	void setID(int ID);
	void setFirstName(string firstName);
	void setLastName(string LastName);
	void setEmail(string Email);
	void setAge(int age);
	void setNumOfDaysToCompleteCourse(int *numOfDays, int courses = 3);
};