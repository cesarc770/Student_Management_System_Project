#pragma once
#include "Student.h"
#include "SoftwareStudent.h"
#include <vector>


class Roster {
private:
	vector<Student> classRosterArray; 
	int size;

public:
	Roster(string studentData[]);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeProgram);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	int getSize() { return static_cast<int>(classRosterArray.size()); }

};
