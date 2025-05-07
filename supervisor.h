#pragma once
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "employee.h"
#include <string>
#include <iostream>

class Sup :public Employee
{
private:
	double annSal;
	double annProdBonus;

public:
	//default construx:
	Sup();

	//construx:
	Sup(string n, string en, string hd, double sal, double bon);

	//deconstrux:
	virtual ~Sup();

	//getters:
	double getAnnSal() const;
	double getAPBonus() const;

	//setters:
	void setAnnSal(double newSal);
	void setAPBonus(double newBonus);

	//printer:
	void printshiftSup() const;
};

#endif