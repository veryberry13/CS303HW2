#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Nonprofessional.h"

using namespace std;


NonProfessional::NonProfessional(const std::string& name, float hourlyWage, int hoursWorked)
	: Employee(name), hourlyWage(hourlyWage), hoursWorked(hoursWorked)
{}

float NonProfessional::GetPay()
{
	float wages = 0;

	if (hoursWorked <= 40)
		wages = hoursWorked * hourlyWage;
	else
	{
		int otHours = hoursWorked - 40;
		wages = 40 * hourlyWage;

		wages += (otHours * (hourlyWage * 1.5));
	}

	return wages;
}

float NonProfessional::GetVacationDays()
{
	return static_cast<float>(hoursWorked) / static_cast<float>(VACATION_RATE); 
}

float NonProfessional::GetHealthContribution()
{
	return GetPay() * 0.02f;
}

