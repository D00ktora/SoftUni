#ifndef PARSE_COMPANIES_H
#define PARSE_COMPANIES_H
#include "Company.h"
#include <memory>
#include <set>
Company* parseUniqueCompanies(const std::string& input, int& numCompanies, std::string func(const Company& c))
{
	
	std::string in = input;
	std::string delimiter = "\n";
	size_t pos = 0;
	std::string token;
	std::vector<Company>companis;
	std::set<std::string>unicID;
	while ((pos = in.find(delimiter)) != std::string::npos) {
		token = in.substr(0, pos);
		in.erase(0, pos + delimiter.length());
		std::istringstream input(token);
		int id_;
		input >> id_;
		std::string name_;
		input >> name_;
		Company curC(id_, name_);
		std::string unic = func(curC);
		if (unicID.find(unic) != unicID.end())
		{
			continue;
		}
		unicID.insert(unic);

		companis.push_back(curC);
	}

	Company* retComp = new Company[companis.size()];

	numCompanies = 0;

	for (numCompanies;numCompanies < companis.size(); numCompanies++)
	{
		retComp[numCompanies] = companis[numCompanies];
	}

	return retComp;
}




#endif // !PARSE_COMPANIES_H









/*


42 theanswertolifetheuniverseandeverything
420 theanswertolifetheuniverseandeverything
end
3



*/