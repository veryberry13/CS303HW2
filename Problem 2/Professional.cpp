#include "Professional.h"

Professional::Professional(string name, double salary, int vacationDays) :  
	Employee(name), salary(salary), vacationDays(vacationDays){}

float Professional::GetHealthContribution()
{
	return (salary/52) * .05f;
}
