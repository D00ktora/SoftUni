#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <vector>

using namespace std;


int main()
{
	int numberOfPipes;
	string chekUp;
	string instalation;

	cin >> numberOfPipes;
	getline(cin >> ws, chekUp);
	getline(cin >> ws, instalation);
	istringstream chekUpSt(chekUp);
	istringstream instalationSt(instalation);
	ostringstream corosion;

	for (int i = 0; i < numberOfPipes; i++)
	{
		int chekUpYear;
		int instalYear;
		chekUpSt >> chekUpYear;
		//cout << chekUpYear << endl;
		instalationSt >> instalYear;
		//cout << instalYear << endl;
		int result = instalYear - chekUpYear;
		int corosions = instalYear / result;
		//cout << corosions;
		corosion << corosions << " ";
		//cout << corosion.str();


	}
	cout << corosion.str();

	return 0;
}

