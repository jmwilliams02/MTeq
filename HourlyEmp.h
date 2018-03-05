#pragma once
#ifndef HOURLY_EMP
#define HOURLY_EMP

#include "Employee.h"

class HourlyEmp : public Employee {
	HourlyEmp(string fName, string lName, int id, float rate);
	~HourlyEmp();
	float getPayRate();
};
#endif
