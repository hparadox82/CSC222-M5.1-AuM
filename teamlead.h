#pragma once
#ifndef TEAMLEAD_H
#define TEAMLEAD_H

#include "prodworker.h"
#include <string>
#include <iostream>

class teamLead :public ProdWorker
{
private:
	double moBonus;
	int reqTrainHr;
	int attTrainHr;
public:
	//default construx:
	teamLead();

	//construx:
	teamLead(string n, string en, string hd, int prodShift, double prodRate, double bon, int reqHr, int attHr);

	//destrux:
	virtual ~teamLead();

	//getters:
	double getmoBonus() const;
	int getreqTrain() const;
	int getattTrain() const;

	//setters:
	void setmoBonus(double newBonus);
	void setreqTrain(int newreqHr);
	void setattTrain(int newattHr);

	//printer:
	void printteamLead() const;

};
#endif