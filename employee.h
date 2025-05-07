#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	string name;
	string emNum;
	string hireDate;

public:
	//default construx:
	Employee();

	//constructor
	Employee(string n, string en, string hd);

	//deconstrux:
	virtual ~Employee();

	//getter:
	string getName() const;
	string getHire() const;
	string getENum() const;

	//setter:
	void setName(string newName);
	void setHire(string newHD);
	void setENum(string newENum);

	//printer:
	void printEmployee() const;

};

#endif
