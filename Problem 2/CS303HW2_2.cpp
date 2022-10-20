#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Professional.h"
#include "Nonprofessional.h"

using namespace std;

int main()
{
	char choice = '\0';
	string name;

	cout << "Please enter the employee's name: ";
	cin >> name;
	cout << "Please choose (P)rofessional or (N)onProfessional: ";
	cin >> choice;

	Employee* e = nullptr;
	if (toupper(choice) == 'P')
		
		e = new Professional(name, 90000.00, 1);
	else
		e = new NonProfessional(name, 18.00, 40);
	cout << "The employees pay this week is: " << e->GetPay() << "$\n" ;
	cout << "The employees weekly health care contribution is: " << e->GetHealthContribution() << "$\n";
	cout << "The employees weekly vacation days are: " << e->GetVacationDays() << "\n";



	return 0;
}