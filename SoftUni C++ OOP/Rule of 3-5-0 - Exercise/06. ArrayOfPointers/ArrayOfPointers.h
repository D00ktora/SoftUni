#ifndef ARRAY_OF_POINTERTS_H
#define ARRAY_OF_POINTERTS_H
#include"Company.h"
#include<vector>
#include<memory>
using namespace std;



class ArrayOfPointers
{
	vector<shared_ptr<Company>> vec;
public:

	void add(Company*& c)
	{
		vec.push_back(shared_ptr<Company>(c));
	}

	int getSize() { return vec.size(); }
	Company* get(size_t i)
	{
		return vec[i].get();
	}

};


#endif // !ARRAY_OF_POINTERTS_H
