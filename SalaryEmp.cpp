#include "stdafx.h"
#include <iostream>
#include "SalaryEmp.h"

using namespace std;

SalaryEmp::SalaryEmp(string fName, string lName, int id, float rate)
	: Employee(fName, lName, id, rate) {
}

SalaryEmp::~SalaryEmp() {}

float SalaryEmp::getPayRate() {
	return this->payRate;
}
