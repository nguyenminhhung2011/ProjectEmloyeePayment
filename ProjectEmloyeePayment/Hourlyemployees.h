#pragma once
#include "Employ.h"

class Hourlyemployees : public Employ {
private:
	double _hourlyPayment;
	int  _totalHours;
public:
	Hourlyemployees();
	double hourlyPayment();
	int totalHours();
	void setHourlyPayment(double);
	void setTotalHours(int);
	double calcuPayment();
	string toString();
};