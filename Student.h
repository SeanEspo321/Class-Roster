#pragma once
#include <string>
#include "Degree.h"


class Student {

private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	std::string age;
	std::string daysInCourse1;
	std::string daysInCourse2;
	std::string daysInCourse3;
	DegreeProgram degreeProgram;

public:
	Student();

	Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, std::string age,
		std::string daysInCourse1, std::string daysInCourse2, std::string daysInCourse3, DegreeProgram degreeProgram);

	void printStudent();

	// Getters
	std::string getStudentID();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmail();
	std::string getAge();
	std::string getDaysInCourse();
	DegreeProgram getDegreeProgram();

	// Setters
	void setStudentID(const std::string studentID);
	void setFirstName(const std::string firstName);
	void setLastName(const std::string lastName);
	void setEmail(const std::string emailAddress);
	void setAge(const std::string age);
	void setDaysInCourse(const std::string daysInCourse1);
	void setDegree(const DegreeProgram degreeProgram);


	~Student();
};