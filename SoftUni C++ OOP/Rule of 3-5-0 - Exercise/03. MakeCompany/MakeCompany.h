#ifndef MAKE_COMPANY_H
#define MAKE_COMPANY_H


#include <memory>
#include <string>
#include <vector>

#include "Company.h"

std::shared_ptr<Company> makeCompany(const std::vector<std::string>& properties)
{

	int id = std::stoi(properties[0]);
	std::string name = properties[1];
	std::vector<std::pair<char, char>> employees;

	for (size_t idx = 2; idx < properties.size(); idx++)
	{
		std::pair<char, char> thePair((char)(properties[idx][0]), (char)(properties[idx][1]));
		employees.push_back(thePair);
	}
	return std::shared_ptr<Company>(new Company(id, name, employees));
}



#endif // !MAKE_COMPANY_H