// This is the Tips class specification file.
#ifndef TIPS_H
#define TIPS_H

class Tips {

private:
	double taxRate;
    const double defaultTaxRate = 0.065;

public: 			
	Tips(){			
		taxRate = defaultTaxRate;
		}
	Tips(double); 	
	double computeTip(double, double);	
};
#endif // !TIPS_H

