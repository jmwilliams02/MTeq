/**
@file:  HourlyEmp.h
@purpose: Class for HourlyEmp

@author Jeff Williams
@date 3/6/2018
*/
#pragma once
#ifndef HOURLY_EMP
#define HOURLY_EMP

#include "Employee.h"

class HourlyEmp : public Employee {
	/*
	@name: Constructor
	@Summary: Creates an HourlyEmp record.

	@param: fName - first name
	@param: lName - last name
	@param: id - employee id
	@param: rate - hourly pay rate

	*/
	HourlyEmp(string fName, string lName, int id, float rate);

	/*
	@name~Destructor
	@Summary: Destroys record
	*/
	~HourlyEmp();

	/*
	@name:  getPayRate
	@Summary: Abstract method to override to determine pay

	@return payRate
	*/
	float getPayRate();
};
#endif
