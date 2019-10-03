#include <iostream>
#include "Roster.h"

//TODO: need to read this from a file
string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Cesar,Caceres,cesarc770@gmail.com,29,20,48,33,SOFTWARE" };

//function prototyping
void PrintMenu();
void AddStudentToRosterMenu();
void RemoveMenu();
void DaysLeftInClassesMenu();

//Instantiating Roster 
Roster classRoster = Roster(studentData);

int main() {
	char user_command;
	do {
		PrintMenu();
		cout << "\nEnter menu option number or 'q' to quit program: ";
		cin >> user_command;

		switch (user_command) {
		case '1':
			classRoster.printAll();
			break;
		case '2':
			AddStudentToRosterMenu();
			break;
		case '3':
			RemoveMenu();
			break;
		case '4':
			DaysLeftInClassesMenu();
			break;
		case 'q':
			break;
		default:
			cout << "Invalid input";
		}

	} while (user_command != 'q');

	return 0;
}


void PrintMenu()
{
	cout << "\nSTUDENT MANAGEMENT SYSTEM MENU" << endl;
	cout << "-------------------------------" << endl;
	cout << "1 - Print Student Roster\n"
		 << "2 - Add Student to Roster\n"
		 << "3 - Remove Student by ID\n"
		 << "4 - Print days left in course for Student by ID" << endl;
}

void AddStudentToRosterMenu()
{
	string fname;
	string lname;
	string studentId;
	string email;
	string age;
	string daysLeftInCourse[3];
	string degree;
	char choice;

	cout << "\nADD STUDENT" << endl;
	cout << "-------------------------" << endl;
	
	studentId = "A" + (classRoster.getSize() + 1);
	cout << "Enter Student First Name: ";
	cin >> fname;
	cout << "Enter Student Last Name: ";
	cin >> lname;
	cout << "Enter Student's email address: ";
	cin >> email;
	cout << "Enter Student's age: ";
	cin >> age;
	for (unsigned i = 0; i < 3; i++)
	{
		cout << "Enter days left for course #" << i + 1 << ": ";
		cin >> daysLeftInCourse[i];
	}
	cout << "Enter Degree option: " << endl;
	cout << "1- SECURITY\n"
		<< "2 - NETWORKING\n"
		<< "3 - SOFTWARE" << endl;
	cin >> choice;
	switch (choice)
	{
	case '1':
		degree = "SECURITY";
		break;
	case '2':
		degree = "NETWORKING";
		break;
	case '3':
		degree = "SOFTWARE";
		break;
	default:
		cout << "Not a valid choice - default of SOFTWARE was chosen" << endl;
		degree = "SOFTWARE";
		break;
	}

	classRoster.add(studentId, fname, lname, email, stoi(age), stoi(daysLeftInCourse[0]), stoi(daysLeftInCourse[1]), stoi(daysLeftInCourse[2]), degree);
	cout << "New Student Added to Roster" << endl;
}

void RemoveMenu()
{
	string studentID;

	cout << "\nREMOVE STUDENT" << endl;
	cout << "-------------------------" << endl;
	cout << "Enter Student ID you wish to remove from Roster: ";
	cin >> studentID;

	classRoster.remove(studentID);
}

void DaysLeftInClassesMenu()
{
	string studentID;

	cout << "\nDAYS LEFT IN CLASSES" << endl;
	cout << "-------------------------" << endl;
	cout << "Enter Student ID to see days left in their classes: ";
	cin >> studentID;

	classRoster.printDaysInCourse(studentID);
}

