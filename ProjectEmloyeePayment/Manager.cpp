#include "Manager.h"

Manager::Manager(){}
double Manager::fixedPayment() { return _fixedPayment; }
int Manager::totalEmployees() { return _totalEmployees; }
double Manager::paymentPerEmployee() { return _paymentPerEmployee; }
void Manager::setFixedPayment(double value){ 
	this->_fixedPayment = value;
}
void Manager::setTotalEmployees(int value){
	this->_totalEmployees = value;
}
void Manager::setPaymentPerEmployee(double value){
	this->_paymentPerEmployee = value;
}
double Manager::calcuPayment(){
	return this->_paymentPerEmployee * this->_totalEmployees + this->_fixedPayment;
}
string Manager::toString(){
	stringstream builder;
	builder << this->_name << "\t\t" << "Manager" << "\t\t" << calcuPayment() << "$\n";
	return builder.str();
}