#ifndef PROFIT_REPORT_H
#define PROFIT_REPORT_H
#include <sstream>
#include <strstream>
#include<map>
#include "Company.h"
#include "ProfitCalculator.h"



std::string getProfitReport(Company* fromInclusive, Company* toInclusive, std::map<int, ProfitCalculator>& profitCalculatorsByCompany)
{
	std::ostringstream result;

	for (Company* current = fromInclusive; current<= toInclusive; current++)
	{
		ProfitCalculator& companyProfitCal = profitCalculatorsByCompany[current->getId()];
	
	
		result << current->getName() << " = " << companyProfitCal.calculateProfit((*current)) << std::endl;
	}


	return result.str();
}




#endif // !PROFIT_REPORT_H


/*

acme 424242420 : 43000 1000
softuni_foundation 20140414 : 0 0
itjoro 878968302 : 100 25
end
878968302 0
424242420 10
20140414 30
end



*/