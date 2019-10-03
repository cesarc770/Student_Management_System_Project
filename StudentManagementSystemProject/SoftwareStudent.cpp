#include "SoftwareStudent.h"


SoftwareStudent::SoftwareStudent()
{
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int NumOfDaysToCompleteCourse[]):
	Student(studentID, firstName, lastName, email, age, NumOfDaysToCompleteCourse, SOFTWARE)
{
	
}


SoftwareStudent::~SoftwareStudent()
{
}

int SoftwareStudent::getDegreeProgram()
{
	return this->degreeType;
}
