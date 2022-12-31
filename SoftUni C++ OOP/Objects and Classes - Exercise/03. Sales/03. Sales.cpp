#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;


class Sale
{
	map<string, double> city;
	string name, product;
	double quantity = 0;
	double price = 0;
public:
	Sale(int);
	void calculate(string& name, string& product, double& quantity, double& price, map<string, double>& city)
	{
		city[name] += price * quantity;
	}

	void print()
	{
		for (auto it = this->city.begin(); it != this->city.end(); it++)
		{
			cout << fixed << setprecision(2);
			cout << (*it).first << " -> " << (*it).second << endl;
		}
	}
};
Sale::Sale(int num)
{
	for (int i = 0; i < num; i++)
	{
		string temp;
		getline(cin, temp);
		istringstream input(temp);
		input >> temp;
		this->name = temp;
		input >> temp;
		this->product = temp;
		input >> temp;
		this->price = stod(temp);
		input >> temp;
		this->quantity = stod(temp);
		Sale::calculate(this->name, this->product, this->quantity, this->price, this->city);
	}
}

int main()
{
	int number;
	cin >> number;
	cin.ignore();
	Sale myClass(number);
	myClass.print();
	return 0;
}


/*

5
Sofia beer 1.20 160
Varna chocolate 2.35 86
Sofia coffee 0.40 853
Varna apple 0.86 75.44
Plovdiv beer 1.10 88
*/