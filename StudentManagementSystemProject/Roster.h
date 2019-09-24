#pragma once
#include "Student.h"
#include <vector>


class Roster {
private:
	vector<Student> classRosterArray; 

public:
	Roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
};
