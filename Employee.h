#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using namespace std;

class Employee {
public:
	/* Member variables*/
	string firstName;
	string lastName;
	int	employeeId;
	float payRate;

public:
	Employee(string fName, string lName, int id, float rate);
	~Employee();
	virtual float getPayRate() = 0;
	string getName();

	string getFirstName() const;
	void setFirstName(string name);
	string getLastName() const;
	void setLastName(string name);


};


#endif