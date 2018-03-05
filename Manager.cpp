#include "stdafx.h"
#include <iostream>
#include "Manager.h"

using namespace std;

Manager::Manager(string fName, string lName, int id, float rate, int employees)
	: Employee(fName, lName, id, rate) {
	this->numberOffEmployee = employees;

}

Manager::~Manager(){}

float Manager::getPayRate() {
	return this->payRate;
}

int Manager::getNumberOfEmployees() const {
	return this->numberOffEmployee;
}

void Manager::setNumberOfEmployees(int amount) {
	this->numberOffEmployee = amount;
}