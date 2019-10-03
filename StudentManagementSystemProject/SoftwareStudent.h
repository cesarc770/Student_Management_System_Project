#pragma once
#include "Student.h"

class SoftwareStudent : public Student
{
private:
	int degreeType = 2;
public:
	SoftwareStudent();
	SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[]);
	~SoftwareStudent();
	int getDegreeProgram();
};

