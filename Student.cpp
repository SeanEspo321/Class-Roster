#include <iostream>
#include "Student.h"
using std::string;
using std::cout;
using std::endl;

Student::Student()
{
	studentID = "";
	firstName = "";
	lastName = "";
	emailAddress = "";
	age = "";
	daysInCourse1 = "";
	daysInCourse2 = "";
	daysInCourse3 = "";
	degreeProgram = DegreeProgram::NONE;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, string age,
	string daysInCourse1, string daysInCourse2,
	string daysInCourse3, DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysInCourse1 = daysInCourse1;
	this->daysInCourse2 = daysInCourse2;
	this->daysInCourse3 = daysInCourse3;
	this->degreeProgram = degreeProgram;
}

void Student::printStudent()
{
	cout << this->studentID << "|||";
	cout << this->firstName << "|||";
	cout << this->lastName << "|||";
	cout << this->emailAddress << "|||";
	cout << this->age << "|||";
	cout << this->daysInCourse1 << "|||";
	cout << this->daysInCourse2 << "|||";
	cout << this->daysInCourse3 << "|||";
	cout << DegreeTypeStrings[(int)this->degreeProgram] << endl << endl;
}

// D2-a: Accessor (getter) function for each instance of the variables in D1

std::string Student::getStudentID() { return this->studentID;  }
std::string Student::getFirstName() { return this->firstName; }
std::string Student::getLastName() { return this->lastName; }
std::string Student::getEmail() { return this->emailAddress; }
std::string Student::getAge() { return this->age; }	
std::string Student::getDaysInCourse() { return this->daysInCourse1; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }

// D2-b: Mutator (setter) function for each instance of the variable in D1

void Student::setStudentID(const std::string studentID) { this->studentID = studentID; }
void Student::setFirstName(const std::string firstName) { this->firstName = firstName; }
void Student::setLastName(const std::string lastName) { this->lastName = lastName; }
void Student::setEmail(const std::string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(const std::string age) { this->age = age; }
void Student::setDaysInCourse(const std::string daysInCourse1) { this->daysInCourse1 = daysInCourse1; }
void Student::setDegree(const DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

Student::~Student() {} // Student destructor does nothing as Student class does not declare anything dynamically