/**
@file:  HourlyEmp.h
@purpose: Class for HourlyEmp

@author Jeff Williams
@date 3/6/2018
*/
#include "stdafx.h"
#include <iostream>
#include "HourlyEmp.h"

using namespace std;

/*Constructor to create a HourlyEmp */
HourlyEmp::HourlyEmp(string fName, string lName, int id, float rate)
	: Employee(fName, lName, id, rate) {
}

/* Destructor to destroy HourlyEmp */
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
HourlyEmp::~HourlyEmp() {}

/* getPayRate override inherited abstract to caculate pay */
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
float HourlyEmp::getPayRate() {
	float biWeeklyHours = 80;

	return biWeeklyHours * this->payRate;
}
