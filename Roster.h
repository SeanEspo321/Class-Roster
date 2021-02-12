#pragma once
#include "Student.h"
#include <string>

class Roster {

private:
	static const int numStudents = 5;
	Student* classRosterArray[numStudents];
	int currentStudentIndex = -1;

public:
	Roster();
	int ParseAddStudents(std::string row);
	void PrintStudents();


	void add();
	void remove();
	void printAll();
	void printAverageDaysInCourse();
	void printInvalidEmails();
	void printByDegreeProgram();



	~Roster();
};