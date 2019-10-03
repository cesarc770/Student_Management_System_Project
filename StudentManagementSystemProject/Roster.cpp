#include "Roster.h"
using namespace std;

vector<string> split(const string& str, const string& delim)
{
	vector<string> rawData;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == string::npos) pos = str.length();
		string data = str.substr(prev, pos - prev);
		if (!data.empty()) rawData.push_back(data);
		prev = pos + delim.length();
	} while (pos < str.length() && prev < str.length());
	return rawData;
}

Roster::Roster(string studentData[]) {
	for (unsigned i = 0; i < 5; i++) {
		vector<string> studentParsedData = split(studentData[i], ",");
		string id = studentParsedData.at(0);
		string fname = studentParsedData.at(1);
		string lname = studentParsedData.at(2);
		string email = studentParsedData.at(3);
		int age = stoi(studentParsedData.at(4));
		int num1 = stoi(studentParsedData.at(5));
		int num2 = stoi(studentParsedData.at(6));
		int num3 = stoi(studentParsedData.at(7));
		int numOfdaysArray[] = { num1,num2,num3 };
		string degree = studentParsedData.at(8);

		add(id, fname, lname, email, age, num1, num2, num3, degree);
	}
	size = 0;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeProgram) {
	int numOfdaysArray[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	Degree degree;
	if (degreeProgram == "SECURITY")
	{
		degree = SECURITY;
	}
	else if (degreeProgram == "NETWORKING")
	{
		degree = NETWORKING;
	}
	else {
		degree = SOFTWARE;
	}
	Student newStudent(studentID, firstName, lastName, emailAddress, age, numOfdaysArray, degree);

	classRosterArray.push_back(newStudent);
	size += 1;
}

void Roster::remove(string studentID) {
	bool found = false;

	for (unsigned i = 0; i < classRosterArray.size(); i++) {
		if (studentID == classRosterArray[i].getID()) {
			cout << "Removing Student  with ID: " << classRosterArray[i].getID() << endl;
			classRosterArray.erase(classRosterArray.begin() + i);
			found = true;
			break;
		}
	}
	if (!found) { cout << "Student not found!" << endl; }
}

void Roster::printDaysInCourse(string studentID) {
	bool found = false;

	for (unsigned i = 0; i < classRosterArray.size(); i++) {
		if (studentID == classRosterArray[i].getID()) {
			for (unsigned j = 0; j < 3; j++) {
				cout << "Class " << j + 1 << " has " << classRosterArray[i].getNumOfDaysToCompleteCourse()[j] << " days left."<< endl;
			}
			cout << "" << endl;
			found = true;
			break;
		}
	}
	if (!found) { cout << "Student not found!" << endl; }
}

void Roster::printAll() {
	for (unsigned i = 0; i < classRosterArray.size(); i++)
	{
		classRosterArray[i].print();
	}
}




