#include <iostream>
using namespace std;


int main()
{
	int numberOfGroups, musalaPpl = 0, monblanPpl = 0, kalimanjaroPpl = 0, k2Ppl = 0, everestPpl = 0;
	cin >> numberOfGroups;

	for (int i = 0; i < numberOfGroups; i++)
	{
		int pplInGroup;
		cin >> pplInGroup;

		if (pplInGroup <= 5)
		{
			musalaPpl += pplInGroup;
		}
		else if (pplInGroup > 5 && pplInGroup <= 12)
		{
			monblanPpl += pplInGroup;
		}
		else if (pplInGroup > 12 && pplInGroup <= 25)
		{
			kalimanjaroPpl += pplInGroup;
		}
		else if (pplInGroup > 25 && pplInGroup <= 40)
		{
			k2Ppl += pplInGroup;
		}
		else if (pplInGroup > 40)
		{
			everestPpl += pplInGroup;
		}
	}
	int tottalPpl = musalaPpl + monblanPpl + kalimanjaroPpl + k2Ppl + everestPpl;
	double procentMusala = (musalaPpl * 1.0 / tottalPpl) * 100.0;
	double procentMonblan = (monblanPpl * 1.0 / tottalPpl) * 100;
	double procentKalimanjaro = (kalimanjaroPpl * 1.0 / tottalPpl) * 100.0;
	double procentK2 = (k2Ppl * 1.0 / tottalPpl) * 100.0;
	double procentEverest = (everestPpl * 1.0 / tottalPpl) * 100.0;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << procentMusala << "%" << endl;
	cout << procentMonblan << "%" << endl;
	cout << procentKalimanjaro << "%" << endl;
	cout << procentK2 << "%" << endl;
	cout << procentEverest << "%" << endl;


	return 0;
}
