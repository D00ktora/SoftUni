#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H
#include <vector>
#include <iostream>
using namespace std;


vector<string> operator+(vector<string>& vec1, vector<string>& vec2)
{
	vector<string>vec3;
	for (int i = 0; i < vec1.size(); i++)
	{
		string text; 
		text += vec1[i];
		text += " ";
		text += vec2[i];
		vec3.push_back(text);
	}
	return vec3;
}



#endif // !SUMOFVECTORS_H