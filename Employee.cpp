/**
@file:  Employee.h
@purpose: Base class for an employee record

@author Jeff Williams
@date 3/6/2018
*/

#include <iostream>
#include <string>
#include "stdafx.h"
#include "Employee.h"

using namespace std;

/*Constructor to create an employee */
Employee::Employee(string fName, string lName, int id, float rate) {
	this->firstName = fName;
	this->lastName = lName;
	this->employeeId = id;
	this->payRate = rate;
}

/* Destructor to destroy employee*/
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Employee::~Employee(){}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*getName retrieves whole name */
string Employee::getName() {
	string wholeName;

	wholeName.append(this->lastName);
	wholeName.append(" ");
	wholeName.append(this->firstName);

	return wholeName;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* getLastName retrieves the last name */
string Employee::getFirstName() const {
	return this->firstName;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* setFirstName sets the first name */
void Employee::setFirstName(string name) {
	this->firstName = name;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* getLastName retrieves the last name */
string Employee::getLastName() const {
	return this->lastName;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/* setLastName sets the last name */
void Employee::setLastName(string name) {
	this->lastName = name;
}
