#include "Employee.h"

void Employee::set_name(string n)
{
	name = n;
}

string Employee::get_name()
{
	return name;
}

void Employee::set_salary(float s)
{
	salary = s;
}

float Employee::get_salary()
{
	return salary;
}

void Employee::set_departmentID(int ID)
{
	departmentID = ID;
}

int Employee::get_departmentID()
{
	return departmentID;
}

void Employee::set_age(int a)
{
	age = a;
}

int Employee::get_age()
{
	return age;
}
