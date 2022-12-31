#include "Register.h"

Register::Register(size_t numCompanies) : companiesArray(nullptr), numAdded(0)
{
	companiesArray = new Company[numCompanies];
}


Register::~Register()
{
	if (companiesArray != nullptr)
	{
		delete[] companiesArray;
	}
}

void Register::add(const Company& c)
{
	companiesArray[numAdded] = c;
	numAdded++;
	
}

Company Register::get(int companyId) const
{
	for (size_t cur = 0; cur < numAdded; cur++)
	{
		if (companiesArray[cur].getId() == companyId)
		{
			return companiesArray[cur];
		}
	}
}