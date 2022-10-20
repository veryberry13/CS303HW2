#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_
#include <string>
#include "Employee.h"
class NonProfessional : public Employee {
private:
	const static int VACATION_RATE = 60;
	float hourlyWage;
	int hoursWorked;

public:
	NonProfessional(const std::string& name, float hourlyWage, int hoursWorked);

	float GetPay() override;

	float GetVacationDays() override;

	float GetHealthContribution() override;


};
#endif
