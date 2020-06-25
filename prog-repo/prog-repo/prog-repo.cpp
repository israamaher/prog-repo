// prog-repo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "Department.h"
#include "Company.h"
using namespace std;


int getoption()
{
    cout << "please selsct option from the following option" << endl;
    cout << "option 1 to add new department" << endl;
    cout << "option 2 to add new employee and assign to a department " << endl;
    cout << "option 3 to change department of employee" << endl;
    cout << "option 4 to print report for every department" << endl;
    cout << "option 5 to close program" << endl;
    int option;
    cin >> option;
    return option;
}

int main()
{
    while (true)
    {
    int option = getoption();
    Company company;

    switch (option)
    {
    case 1:
        company.adddepartment();
        break;
    case 2:
        company.addEmployee();
        break;
    case 3:
        company.changeDepartment();
        break;
    case 4:
        company.print();
        break;
    case 5:
        return 0;
    default:
        cout << "please choose the wrong number";
        break;
    }
    }
    return 0;
}


