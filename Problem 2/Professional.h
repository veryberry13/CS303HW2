#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_

#include "Employee.h"

class Professional : public Employee
{
private:
	const static int VACATION_RATE = 10;
	float salary;
	int vacationDays;

public:
	Professional(string name, double salary, int vacationDays);

	float GetPay() override { return salary / 52.0f; }

	float GetVacationDays() override { return vacationDays; }


	float GetHealthContribution() override;
};
#endif


