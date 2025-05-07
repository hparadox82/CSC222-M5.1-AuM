#pragma once
#ifndef PRODWORKER_H
#define PRODWORKER_H

#include "employee.h"
#include <string>
#include <iostream>

class ProdWorker :public Employee
{
private:
	int shift;
	double hourPay;

public:
	//default construx:
	ProdWorker();

	//construx:
	ProdWorker(string n, string en, string hd, int prodShift, double prodRate);

	//destrux:
	virtual ~ProdWorker();

	//getter:
	int getShift() const;
	double getHourly() const;

	//setter:
	void setShift(int newShift);
	void setHourly(double newRate);

	//printer:
	void printProdWorker() const;
};

#endif