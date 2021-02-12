#include <iostream>
#include "Roster.h"
using std::string;
using std::cout;
using std::endl;

Roster::Roster()
{
	for (int i = 0; i < numStudents; i++) classRosterArray[i] = nullptr;
}

int Roster::ParseAddStudents(std::string row)
{
	size_t rhs = row.find(",");
	string studentID = row.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = row.find(",", lhs);
	string firstName = row.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = row.find(",", lhs);
	string lastName = row.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = row.find(",", lhs);
	string emailAddress = row.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = row.find(",", lhs);
	string ageString = row.substr(lhs, rhs - lhs);
	int age = stoi(ageString);

	lhs = rhs + 1;
	rhs = row.find(",", lhs);
	string daysInCourse1String = row.substr(lhs, rhs - lhs);
	int daysInCourse1 = stoi(daysInCourse1String);

	lhs = rhs + 1;
	rhs = row.find(",", lhs);
	string daysInCourse2String = row.substr(lhs, rhs - lhs);
	int daysInCourse2 = stoi(daysInCourse2String);

	lhs = rhs + 1;
	rhs = row.find(",", lhs);
	string daysInCourse3String = row.substr(lhs, rhs - lhs);
	int daysInCourse3 = stoi(daysInCourse3String);

	lhs = rhs + 1;
	DegreeProgram theDegreeProgram;

	int ERROR_CODE = 999;

	try
	{
		string degreeString = row.substr(lhs, row.length() - lhs);
		if (degreeString == "SECURITY") { theDegreeProgram = DegreeProgram::SECURITY; }
		else if (degreeString == "NETWORK") { theDegreeProgram = DegreeProgram::NETWORK; }
		else if (degreeString == "SOFTWARE") { theDegreeProgram = DegreeProgram::SOFTWARE; }
		else if (degreeString == "NONE") { theDegreeProgram = DegreeProgram::NONE; }
		else throw ERROR_CODE;
	}
	catch (int e)
	{
		cout << "Error code: " << e << endl;
		return e;
	}

	classRosterArray[++currentStudentIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1,
		daysInCourse2, daysInCourse3, theDegreeProgram);
	return 0;
}

void Roster::PrintStudents()
{
	for (int i = 0; i < numStudents; i++)
	{
		classRosterArray[i]->printStudent();
	}
}

void Roster::add()
{

}

Roster::~Roster()
{
	for (int i = 0; i < numStudents; i++)
	{
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
		cout << "Deleting Student" << std::endl;
	}
	cout << "GONE" << std::endl;
}