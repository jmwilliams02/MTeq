
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Employee.h"

using namespace std;

Employee::Employee(string fName, string lName, int id, float rate) {
	this->firstName = fName;
	this->lastName = lName;
	this->employeeId = id;
	this->payRate = rate;
}

Employee::~Employee(){}

string Employee::getName() {
	string wholeName;

	wholeName.append(this->lastName);
	wholeName.append(" ");
	wholeName.append(this->firstName);

	return wholeName;
}

string Employee::getFirstName() const {
	return this->firstName;
}

void Employee::setFirstName(string name) {
	this->firstName = name;
}

string Employee::getLastName() const {
	return this->lastName;
}

void Employee::setLastName(string name) {
	this->lastName = name;
}
