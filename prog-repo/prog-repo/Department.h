#pragma once
#include <string>
using namespace std;
class Department
{
private:
	string name;
	int departmentID;
	string manager_Name;
public:
	void set_name(string n);
	string  get_name();

	void set_departmentID(int id);
	int get_departmentID();

	void  set_manName(string mn);
	string get_manName();
};

