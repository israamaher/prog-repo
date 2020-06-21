#pragma once
#include <string>
using namespace std;
class Employee
{

private:
	string name;
	float salary;
	int departmentID, age;

public:
	void set_name(string n);
	string get_name();

	void set_salary(float s);
	float get_salary();

	void set_departmentID(int ID);
	int get_departmentID();

	void set_age(int a);
	int get_age();

};

