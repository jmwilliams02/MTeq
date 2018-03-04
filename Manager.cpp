#include <iostream>
#include "Manager.h"

using namespace std;

Manager::Manager(string fName, string lName, int id, float rate, int employees)
	: Employee(fName, lName, id, rate) {
	this->numberOffEmployee = employees;

}