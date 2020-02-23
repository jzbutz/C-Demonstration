#ifndef PAYROLL_H
#define PAYROLL_H

#include <string>
#include <iostream>

class PayRoll
{
private:
  std::string employeeName;
  double payRate;
  double hoursWorked;
  double totalPay;
public:
  PayRoll(std::string name, double rate);
  void setHours(double hours);
  std::string getName();
  double getRate();
  double getHours();
  double calculateTotal();
  void printData();
};

#endif