#include <string>

#ifndef PAYROLL_H
#define PAYROLL_H

class PayRoll {
private:
	std::string name;
	double rate;
	double hours;
	double total;
public:
	double getTotal();
	double getRate();
	double getHours();
	std::string getName();
	void setRate(double);
	void setName();
	void setHours(double);
	void paySort();
};

#endif
