#include "supervisor.h"
#include "prodworker.h"
#include <iostream>
#include <iomanip>

//default construx:
//pre: none
//post: init's shiftsup calling employee's default construx for base part/default values.
Sup::Sup() : Employee(), annSal(0.0), annProdBonus(0.0)
{
	//cout << "Shift Sup default constructor activated." << endl;
	//pre: base employee part init'd by its default construx and annSal and annProdBonus set to 0.0.
	//post: shiftsup obj created with default state.
}

//construx:
//pre: valid parameters per declaration.
//post: init's shiftsup with specified values using employee's construx for base part.
Sup::Sup(string n, string en, string hd, double sal, double bon) : Employee(move(n), move(en), move(hd)), annSal(sal), annProdBonus(bon)
{
	//cout << "Shift Sup constructor activated." << endl;
	//pre: Base employee name/number/hire date initialized, annSal set to sal, annProdBonus to bon.
	//post: shiftsup obj created with specified state.
}

//destrux:
//pre: none
//post: shiftsup obj properly destroyed.
Sup::~Sup()
{
	//cout << "shiftSup destructor activated." << endl;
}

//getters:
//pre: shiftsup obj has been init'd.
//post: returns sup's salary and production bonus.
double Sup::getAnnSal()const
{
	return annSal;
}
double Sup::getAPBonus() const
{
	return annProdBonus;
}

//setters:
//pre: newsal and newbonus are doubles and validated for input.
//post: sup's salary and bonus are updated.
void Sup::setAnnSal(double newSal)
{
	if (newSal >= 0.0)
	{
		annSal = newSal;
	}
	else
	{
		cerr << "ERROR: Annual salary can't be negative (corporations hate this one easy trick!)" << endl;
	}
}
void Sup::setAPBonus(double newBonus)
{
	if (newBonus >= 0.0)
	{
		annProdBonus = newBonus;
	}
	else
	{
		cerr << "ERROR: Annual bonus can't be negative (corporations additionally hate this one easy trick!)" << endl;
	}
}

//printer:
//pre: shifsup obj has been init'd.
//post: all shiftsup info is printed.
void Sup::printshiftSup() const
{
	Employee::printEmployee();
	cout << "ANNUAL SALARY: $" << fixed << setprecision(2) << annSal << "\nANNUAL PRODUCTION BONUS: $" << fixed << setprecision(2) << annProdBonus << endl;
	cout << "==============================\n" << endl;
}