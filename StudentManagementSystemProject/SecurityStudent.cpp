#include "SecurityStudent.h"



SecurityStudent::SecurityStudent()
{
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[]) :
	Student(studentID, firstName, lastName, email, age, NumOfDaysToCompleteCourse, SECURITY)
{
}


SecurityStudent::~SecurityStudent()
{
}

int SecurityStudent::getDegreeProgram()
{
	return this->degreeType;
}
