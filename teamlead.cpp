#include "teamlead.h"
#include <iostream>
#include <iomanip>

//default construx:
//pre: none
//post: uses prodwork default construx to init with default values.
teamLead::teamLead() :ProdWorker(), moBonus(0.0), reqTrainHr(0), attTrainHr(0)
{
	//cout << "teamLead default constructor activated." << endl;
	//pre: base prodwork init by its defaults, teamlead members init to defaults.
	//post teamlead obj created with default state.
}

//construx:
//pre: parameters are valid.
//post: inits teamlead with specified values using prodworker's construx for base part.
teamLead::teamLead(string n, string en, string hd, int prodShift, double prodRate, double bon, int reqHr, int attHr) :ProdWorker(move(n), move(en), move(hd), prodShift, prodRate), 
moBonus(bon), reqTrainHr(reqHr), attTrainHr(attHr)
{
	//cout << "teamLead constructor activated." << endl;
	//pre: base prodworker init, teamLead specific members init'd with provided values
	//post: teamLead obj created with specified state.
}

//destrux:
//pre: none
//post: teamLead is properly destroyed.
teamLead::~teamLead()
{
	//cout << "teamLead destructor activated." << endl;
}

//getters:
//pre: teamLead obj has been init'd.
//post returns monthly bonus, required and attended training hours.
double teamLead::getmoBonus() const
{
	return moBonus;
}
int teamLead::getreqTrain() const
{
	return reqTrainHr;
}
int teamLead::getattTrain() const
{
	return attTrainHr;
}

//setters:
//pre: newbonus is double, newreqhr and newatthr are ints.
//post: newbonus, newreqhr and newatthr are updated.
void teamLead::setmoBonus(double newBonus)
{
	if (newBonus >= 0.0)
	{
		moBonus = newBonus;
	}
	else
	{
		cerr << "ERROR: Monthly bonus can't be negative (another trick corporations hate!)." << endl;
	}
}
void teamLead::setreqTrain(int newreqHr)
{
	if (newreqHr >= 0)
	{
		reqTrainHr = newreqHr;
	}
	else
	{
		cerr << "ERROR: Required training hours can't be negative." << endl;
	}
}
void teamLead::setattTrain(int newattHr)
{
	if (newattHr >= 0)
	{
		attTrainHr = newattHr;
	}
	else
	{
		cerr << "ERROR: Attended training hours can't be negative." << endl;
	}
}

//printer:
void teamLead::printteamLead() const
{
	Employee::printEmployee();
	ProdWorker::printProdWorker();
	cout << "MONTHLY BONUS: $" << fixed << setprecision(2) << moBonus << "\nREQUIRED TRAINING HOURS: " << reqTrainHr << "\nATTENDED TRAINING HOURS: " << attTrainHr << endl;
	cout << "===============================\n" << endl;
}
