#pragma once
#include "Student.h"
class SecurityStudent :
	public Student
{
private:
	int degreeType = 0;
public:
	SecurityStudent();
	SecurityStudent(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[]);
	~SecurityStudent();
	int getDegreeProgram();
};

