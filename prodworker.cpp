#include "prodworker.h"
#include <iostream>
#include <iomanip>
#include <utility>


//default construx:
//precondt: none
//postcondt: init prodworker with default values using Employee's default construx for the base.
ProdWorker::ProdWorker() : Employee(), shift(0), hourPay(0.0)
{
	//cout << "Production Worker default constructor activated." << endl;
	//pre: base employee part init by its default construx, shift and hourPay set to 0/.0 respectively.
	//post: prodworker object created with default state.
}

//construx:
//pre: parameters valid as per declaration.
//post: init's prodworker with specified values using employee's construx for base part.
ProdWorker::ProdWorker(string n, string en, string hd, int prodShift, double prodRate) : Employee(move(n), move(en), move(hd)), shift(prodShift), hourPay(prodRate)
{
	//cout << "Production WOrker constructor activated." << endl;
	//pre: base employee part init with its construx, name/num/hire date, plus shift set to prodshift and hourpay set to prodrate.
	//post prodworker object created w/ specified state.
}
//destrux:
//pre: none
//post: prodworker is properly destroyed
ProdWorker::~ProdWorker()
{
	//cout << "Production Worker destructor activated."<< endl;
}
//getters:
//pre: prodworker obj init'd.
//post: returns current shift or hourly pay rate as per declaration.
int ProdWorker::getShift() const
{
	return shift;
}
double ProdWorker::getHourly() const
{
	return hourPay;
}

//setters:
//pre: newshift, newrate are int and double.
//post: worker's shift and hourly rate are updated.
void ProdWorker::setShift(int newShift)
{
	//validation:
	if (newShift == 1 || newShift == 2)
	{
		shift = newShift;
	}
	else
	{
		cerr << "Wrong shift value. Has to be 1 (Day) or 2 (Night)." << endl;
	}
	shift = newShift;
}
void ProdWorker::setHourly(double newRate)
{
	if (newRate >= 0.0)
	{
		hourPay = newRate;
	}
	else
	{
		cerr << "ERROR: Hourly pay rate must not be negative." << endl;
	}
	hourPay = newRate;
}

//printer:
//pre: prodworker is initialized fully.
//post: all prodworker info is printed.
void ProdWorker::printProdWorker() const
{
	Employee::printEmployee();
	cout << "SHIFT:";
	if (shift == 1)
	{
		cout << "Day" << endl;
	}
	else if (shift == 2)
	{
		cout << "Night" << endl;
	}
	else
	{
		cout << "ERROR: Unknown or invalid shift (" << shift << ")" << endl;
	}
	cout << "\nHOURLY RATE: $" << fixed << setprecision(2) << hourPay << endl;
	cout << "...............................\n" << endl;
}