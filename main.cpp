#include <iostream>
#include "Roster.h"

int main()
{
	const int numStudents = 5;

	const std::string studentData[] =
	{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Sean,Esposito,sespo3@wgu.edu,31,22,25,23,SOFTWARE"
	};

	Roster stuRoster; // Calls empty constructor
	for (int i = 0; i < numStudents; i++) stuRoster.ParseAddStudents(studentData[i]);
	stuRoster.PrintStudents();
	system("pause");
	return 0;
}