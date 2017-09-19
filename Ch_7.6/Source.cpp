// This program calculates the gratuity on a restaurant meal
#include <iostream>
#include <iomanip>
#include "Tips.h"
using namespace std;

int main() {
	
	double actualTaxRate, desiredTipRate;
	double currentBillTotal;
	char choice;
	const char CHOICE_CONTINUE = 'c';	

	cout << "Welcome to the calculator of the gratuity on a restaurant meal!\n";
	cout << "Please enter the actual tax rate:\n";
	cin >> actualTaxRate;	
	Tips gratuity(actualTaxRate);

	do {	
		cout << "Please enter the bill Total:\n";
		cin >> currentBillTotal;

		while (currentBillTotal < 0)
		{
			cout << "The bill total cannot be negative. Please enter the validate number:\n";
			cin >> currentBillTotal;
		}
		
		cout << "Please enter the desired tip rate:\n";
		cin >> desiredTipRate;
		while (desiredTipRate < 0)
		{
			cout << "The desired tip rate cannot be negative. Please enter the validate number.\n";
			cin >> desiredTipRate;
		}
		
		cout << fixed << showpoint << setprecision(2);
		cout << "\nThe gratuity on the meal is $" << gratuity.computeTip(currentBillTotal, desiredTipRate) << endl;
		cout <<  currentBillTotal<<desiredTipRate<<endl;
		cout << "Please press 'c' to calculate another tip or any another key to quit:\n";
		cin.ignore();
		cin.get(choice);		

	} while (choice == CHOICE_CONTINUE);
}