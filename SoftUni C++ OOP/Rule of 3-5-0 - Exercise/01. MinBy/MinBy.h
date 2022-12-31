#ifndef MIN_BY_H
#define MIN_BY_H
#include <vector>

std::string minBy(std::vector<std::string>& values,bool func(const std::string& a, const std::string& b))
{
	std::string a = values[0];
	for (auto it = values.begin(); it != values.end(); it++)
	{
		if (func(*it, a))
		{
			a = *it;
		}
	}
	return a;
}


//std::string minBy(std::vector<std::string>& values, bool lessThanBySize(const std::string& a, const std::string& b))
//{
//	std::string a = values[0];
//	std::string temp;
//	for (int i = 1; i < values.size(); i++)
//	{
//		std::string b = values[i];
//		if (lessThanByLex(a, b))
//		{
//			a = values[i];
//		}
//	}
//	return a;
//}
//
//std::string minBy(std::vector<std::string>& values, bool moreThanBySize(const std::string& a, const std::string& b))
//{
//	std::string a = values[0];
//	std::string temp;
//	for (int i = 1; i < values.size(); i++)
//	{
//		std::string b = values[i];
//		if (lessThanByLex(a, b))
//		{
//			a = values[i];
//		}
//	}
//	return a;
//}




#endif // !MIN_BY_H