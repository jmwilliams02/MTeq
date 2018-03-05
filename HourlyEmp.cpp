#include "stdafx.h"
#include <iostream>
#include "HourlyEmp.h"

using namespace std;

HourlyEmp::HourlyEmp(string fName, string lName, int id, float rate)
	: Employee(fName, lName, id, rate) {
}

HourlyEmp::~HourlyEmp() {}

float HourlyEmp::getPayRate() {
	return this->payRate;
}
