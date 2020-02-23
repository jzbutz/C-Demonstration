#include "payroll.h"
#include <string>
#include <iostream>

PayRoll::PayRoll(std::string name, double rate)
{
  employeeName = name;
  payRate = rate;
}

void PayRoll::setHours(double hours)
{
  hoursWorked = hours;
}

std::string PayRoll::getName()
{
  return employeeName;
}

double PayRoll::getRate()
{
  return payRate;
}

double PayRoll::getHours()
{
  return hoursWorked;
}

double PayRoll::calculateTotal()
{
  totalPay = payRate * hoursWorked;
  return totalPay;
}

void PayRoll::printData()
{
  std::cout << "Employee's name: " << employeeName << std::endl;
  std::cout << "Employee's pay rate: " << employeeName << std::endl;
  std::cout << "Employee's hours worked: " << employeeName << std::endl;
  std::cout << "Employee's total pay: " << employeeName << std::endl;
}