#pragma once
#include "Employee.h"
#include "Department.h"
#include <string>
#include <iostream>
using namespace std;
class Company
{
private:
	int numberOfEmployee, numberOfDepartment;
	 Employee employees[100];
	 Department departments[100];

public:
	void adddepartment();
	void addEmployee();
	void changeDepartment();
	void print();


	Company();
};

