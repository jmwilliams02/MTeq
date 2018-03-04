#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Employee.h"

class Manager: protected Employee {
private:
	int numberOffEmployee;
public:
	Manager(string fName, string lName, int id, float rate, int employees);
	~Manager();

	int getNumberOfEmployees() const;
	void setNumberOfEmployees(int amount);

};

#endif