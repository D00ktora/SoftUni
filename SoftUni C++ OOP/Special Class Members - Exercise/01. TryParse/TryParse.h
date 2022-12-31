#ifndef TRY_PARSE_H
#define TRY_PARSE_H
#include <string>
#include <iostream>
#include <sstream>
bool tryParse(std::string& str, int& a)
{

	std::istringstream strin(str);
	bool res = (bool)(strin >> a);
	return res;
}

#endif // !TRY_PARSE_H
