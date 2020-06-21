#include "Department.h"

void Department::set_name(string n)
{
	name = n;
}

string Department::get_name()
{
	return name;
}

void Department::set_departmentID(int id)
{
	departmentID = id;
}

int Department::get_departmentID()
{
	return departmentID;
}

void Department::set_manName(string mn)
{
	manager_Name = mn;
}

string Department::get_manName()
{
	return manager_Name;
}
