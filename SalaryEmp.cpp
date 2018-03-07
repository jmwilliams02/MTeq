/**
@file:  SalaryEmp.h
@purpose: Class for an SalaryEmp

@author Jeff Williams
@date 3/6/2018
*/
#include "stdafx.h"
#include <iostream>
#include "SalaryEmp.h"

using namespace std;

/*Constructor to create a SalaryEmp */
SalaryEmp::SalaryEmp(string fName, string lName, int id, float rate)
	: Employee(fName, lName, id, rate) {
}

/* Destructor to destroy SalaryEmp */
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
SalaryEmp::~SalaryEmp() {}

/* getPayRate override inherited abstract to caculate pay */
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
float SalaryEmp::getPayRate() {
	return this->payRate;
}
