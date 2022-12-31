#ifndef ORDERED_INSERTER_H
#define ORDERED_INSERTER_H
#include"Company.h"

class OrderedInserter
{
	std::vector<const Company*>& vec;

public:
	OrderedInserter(std::vector<const Company*>& temp) : vec(temp) {}

	void insert(const Company* newC)
	{
		std::vector<const Company*>::iterator it = vec.begin();
		for (;it != vec.end(); it++)
		{
			if (newC->getId() < (*it)->getId())
			{
				break;
			}
		}
		vec.insert(it, newC);
	}
};
#endif // !ORDERED_INSERTER_H