// CSC222-M5.1-AuM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Factory Workers Project

#include <iostream>
#include <iomanip>
#include "employee.h"
#include "prodworker.h"
#include "supervisor.h"
#include "teamlead.h"

int main()
{
    //employee class:
    Employee e1("Dominick Smith", "E0001", "25 September 2022");
    cout << "EMPLOYEE PROFILE:" << endl;
    e1.printEmployee();
    //demonstrating updating:
    e1.setName("D. Smith");
    e1.setHire("26 Sep 2022");
    cout << "UPDATED EMPLOYEE PROFILE:" << endl;
    e1.printEmployee();

    //prodworker class:
    ProdWorker w1("Victor Maglia", "W0001", "25 October 2022", 1, 32.50);
    cout << "PRODUCTION WORKER PROFILE:" << endl;
    w1.printProdWorker();
    //updating...
    w1.setName("V. Maglia");
    w1.setHire("25 Oct 2022");
    w1.setShift(2);
    w1.setHourly(35.75);
    w1.setENum("W_0001");
    cout << "UPDATED PRODUCTION WORKER PROFILE:" << endl;
    w1.printProdWorker();

    //shift sup class:
    Sup s1("Austin Wilhelm Moldred", "SU0001", "11 September 2020", 105000, 1000);
    cout << "SUPERVISOR PROFILE:" << endl;
    s1.printshiftSup();
    //updating...
    s1.setAnnSal(110000);
    s1.setAPBonus(800);
    s1.setName("A. W. Moldred");
    cout << "UPDATED SUPERVISOR PROFILE:" << endl;
    s1.printshiftSup();


    //teamlead class:
    teamLead t1("Timothy Himothy Sallo", "TL001", "08 January 2021", 1, 46.75, 2500, 80, 79);
    teamLead t2("John Dart Davis, 2", "TL002", "15 October 2022", 2, 46.75, 2500, 80, 75);
    cout << "TEAM LEAD PROFILE:" << endl;
    t1, t2.printteamLead();
    //updating...
    t2.setName("J. D. Davis");
    t1.setName("T. H. Sallo");
    t1, t2.setmoBonus(3500);
    t1, t2.setHourly(50.00);
    cout << "UPDATED TEAM LEAD PROFILE:" << endl;
    t1, t2.printteamLead();

    return 0;
}