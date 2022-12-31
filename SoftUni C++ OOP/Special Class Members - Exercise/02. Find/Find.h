#ifndef FIND_H
#define FIND_H

#include <string>
#include "Company.h"

using namespace std;

Company* find (vector<Company*>& comp, int id)
{
	for (auto it = comp.begin(); it != comp.end();it++)
	{
		if (id == (*it)->getId())
		{
			return *it;
		}
	}
	return nullptr;
}

#endif // !FIND_H
