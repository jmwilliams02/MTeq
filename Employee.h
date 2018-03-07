/**
@file:  Employee.h
@purpose: Base class for an employee record

@author Jeff Williams
@date 3/6/2018
*/
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
	/*
	@name: Constructor
	@Summary: Creates an employee record.

	@param: fName - first name
	@param: lName - last name
	@param: id - employee id
	@param: rate - pay rate

	*/
	Employee(string fName, string lName, int id, float rate);

	/* 
	@name~Destructor
	@Summary: Destroys record
	*/
	~Employee();

	/* 
	@name:  getPayRate
	@Summary: Abstract method to determine pay
	
	@ret payRate
	*/
	virtual float getPayRate() = 0;

	/*
	@name:  getName
	@Summary: Returns the employee's whole name

	@ret string => whole name
	*/
	string getName();

	/*
	@name:  getFirstName
	@Summary: Returns the employee's first name

	@ret string => first name
	*/
	string getFirstName() const;

	/*
	@name:  setFirstName
	@Summary: Sets the employee's first name

	@param:  name to set
	*/
	void setFirstName(string name);

	/*
	@name:  getLastName
	@Summary: Returns the employee's last name

	@ret string => last name
	*/
	string getLastName() const;

	/*
	@name:  setLastName
	@Summary: Sets the employee's last name

	@param:  name to set
	*/
	void setLastName(string name);


};


#endif