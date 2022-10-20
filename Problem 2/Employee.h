#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

using std::string;

class Employee {
protected:
	string name;
		
public:
	Employee(const string& name) : name(name) {}
	
	virtual float GetPay() = 0;
	virtual float GetVacationDays() = 0;
	virtual float GetHealthContribution() = 0;
};
#endif
