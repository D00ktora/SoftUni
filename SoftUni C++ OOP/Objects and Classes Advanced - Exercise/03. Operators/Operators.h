#ifndef OPERATORS_H
#define OPERATORS_H
#include <ostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string>& operator << (vector<string>& one, string& two)
{
	
	one.push_back(two);
	return one;
}

string& operator + (string& str, const int number)
{
	str += to_string(number);
	return str;
}
string operator + (string& str, string& str2)
{
	str += str2;
	return str;
}

ostream& operator << (ostream& str, vector<string> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		str << vec[i] << endl;
	}
	return str;
}




#endif // !OPERATORS_H#pragma once
