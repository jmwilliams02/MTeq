#pragma once
#ifndef SALARY_EMP
#define SALARY_EMP

#include "Employee.h"

class SalaryEmp : public Employee {
	SalaryEmp(string fName, string lName, int id, float rate);
	~SalaryEmp();
	float getPayRate();

};
#endif // !SALARY_EMP

