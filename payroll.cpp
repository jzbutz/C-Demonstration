#include "payroll.h"
#include <string>
#include <iostream>

double PayRoll::getTotal()
{
	total = hours * rate;
	return total;
}

double PayRoll::getHours()
{
	return hours;
}

double PayRoll::getRate()
{
	return rate;
}

std::string PayRoll::getName()
{
	return name;
}

void PayRoll::setHours(double hour)
{
	std::cout << "Enter hours" << std::endl;
	std::cin >> hours;
}

void PayRoll::setRate(double rat)
{
	std::cout << "Enter rate" << std::endl;
	std::cin >> rate;
}

void PayRoll::setName()
{
	std::cout << "Enter the employee's name: ";
	std::cin >> name;
}
