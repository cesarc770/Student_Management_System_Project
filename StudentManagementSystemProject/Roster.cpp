#include "Roster.h"
using namespace std;

const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Cesar,Caceres,cesarc770@gmail.com,29,20,48,33,SOFTWARE" };

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


Roster::Roster() {
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
		Student newStudent(id, fname, lname, email, age, numOfdaysArray, SOFTWARE);

		classRosterArray.push_back(newStudent);

	}
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram) {
	int numOfdaysArray[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	Student newStudent(studentID, firstName, lastName, emailAddress, age, numOfdaysArray, degreeProgram);
}

void Roster::printAll() {
	for (unsigned i = 0; i < classRosterArray.size(); i++)
	{
		classRosterArray[i].print();
	}
}


int main() {
	Roster classRoster = Roster();
	classRoster.printAll();
	
	return 0;
}



