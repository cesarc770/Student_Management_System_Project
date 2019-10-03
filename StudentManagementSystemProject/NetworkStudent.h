#pragma once
#include "Student.h"
class NetworkStudent :
	public Student
{
private:
	int degreeType = 1;
public:
	NetworkStudent();
	NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[]);
	~NetworkStudent();
	int getDegreeProgram();
};

