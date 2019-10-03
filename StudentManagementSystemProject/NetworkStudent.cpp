#include "NetworkStudent.h"



NetworkStudent::NetworkStudent()
{
}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[]) :
	Student(studentID, firstName, lastName, email, age, NumOfDaysToCompleteCourse, NETWORKING)
{
}

NetworkStudent::~NetworkStudent()
{
}

int NetworkStudent::getDegreeProgram()
{
	return this->degreeType;
}