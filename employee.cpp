#include "employee.h"
#include <iostream>
#include <utility>

using namespace std;

//default construx:
//pre: none
//post: employee obj made with empty strings
Employee::Employee(): name(""), emNum(""), hireDate("")
{
	//cout << "Default constructor for employee activated." << endl;
}

//construx:
//pre: private members name, emnum, hiredate are valid.
//post: employee obj made with specified values.
Employee::Employee(string n, string en, string hd): name(move(n)), emNum(move(en)), hireDate(move(hd))
{
	//cout << "Constructor for employee activated." << endl;
}

//destrux:
//pre: none
//post: employee object destroyed.
Employee::~Employee()
{
	//cout << "Destructor for employee activated." << endl;
}

//getters:
//pre: employee obj is init'd.
//post: returns employee name/number/hire date.
string Employee::getName()const
{
	return name;
}
string Employee::getENum() const
{
	return emNum;
}
string Employee::getHire() const
{
	return hireDate;
}

//setters:
//pre: strings newname, newenum, newhd represent new strings.
//post: employee's name/num/hire date set to newXX strings.
void Employee::setName(string newName) 
{
	name = move(newName);
}

void Employee::setENum(string newENum) 
{
	emNum = move(newENum);
}

void Employee::setHire(string newHD)
{
	hireDate = move(newHD);
}

//printer:
//pre: employee obj init'd.
//post: all employee info is printed.
void Employee::printEmployee() const
{
	cout << "==============================" << endl;
	cout << ".........EMPLOYEE ID..........\nNAME: " << name << "\nID NO.: " << emNum << "\nHIRE DATE: " << hireDate << endl;
	cout << "==============================\n\n" << endl;
}