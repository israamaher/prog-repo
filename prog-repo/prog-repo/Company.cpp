#include "Company.h"
#include<iostream>
using namespace std;
void Company::adddepartment()
{
	int departmentID;
	string name, manger_Name;

	cout << "enter department ID";
	cin >> departmentID;
	cout << "enter department Name";
	cin >> name;
	cout << "enter department manger name";
	cin >> manger_Name;

	Department department;
	department.set_departmentID(departmentID);
	department.set_name(name);
	department.set_manName(manger_Name);

	departments[numberOfDepartment] = department;
	numberOfDepartment++;
}

void Company::addEmployee()
{
	int age, departmentID;
	string name;
	float salary;

	cout << "enter Employee name";
	cin >> name;
	cout << "enter department ID";
	cin >> departmentID;
	cout << "enter salary";
	cin >> salary;
	cout << "enter age";
	cin >> age;


	Employee employee;
	employee.set_name(name);
	employee.set_departmentID(departmentID);
	employee.set_salary(salary);
	employee.set_age(age);


	employees[numberOfEmployee] = employee;
	numberOfEmployee++;

}

void Company::changeDepartment()
{

	string name;
	int departmentID;

	cout << "enter Employee name";
	cin >> name;
	cout << "enter department ID";
	cin >> departmentID;

	for (int i = 0; i <= numberOfEmployee; i++)
	{
		if (employees[i].get_name() == name)
		{
			employees[i].set_departmentID(departmentID);
			break;
		}
	}



}

void Company::print()
{
	for (int i = 0; i < numberOfDepartment; i++)
	{
		Department currentDepartment = departments[i];
		int employeesCount = 0;
		for (int j = 0; j < numberOfEmployee; j++)
		{
			if (employees[j].get_departmentID() == currentDepartment.get_departmentID())
			{
				employeesCount++;
			}
		}

		cout << currentDepartment.get_name() << " has " << employeesCount << " employees." << endl;
	}
}






Company::Company():numberOfEmployee(0), numberOfDepartment(0)
{
}

