// This is the Tips class function implementation file
#include "Tips.h"
#include <iostream>
using namespace std;

Tips::Tips(double rate) {

	if (rate < 0)
		taxRate = defaultTaxRate;
	else
		taxRate = rate;	
}

double Tips::computeTip(double totalBill, double tipRate){

	return (totalBill/(1+taxRate+tipRate))*tipRate;
}