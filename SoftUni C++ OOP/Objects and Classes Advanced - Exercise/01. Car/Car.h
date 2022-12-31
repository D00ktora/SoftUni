#ifndef CAR_H
#define CAR_H


#include <iostream>
using namespace std;
using namespace std;
class Car
{
	std::string Brand;
	std::string Model;
	int Year;
public:
	Car(std::string, std::string, int);


	const string  GetBrand() const
	{
		return this->Brand;
	}
	const string GetModel() const 
	{
		return this->Model;
	}
	const int GetYear() const
	{
		return this->Year;
	}

	friend ostream& operator <<  (ostream& os,const Car& car);

};

ostream& operator<<(ostream& os,const Car& car)
{
	os << car;
	return os;
}


Car::Car(std::string brand, std::string model, int year)
{
	this->Model = model;
	this->Brand = brand;
	this->Year = year;
}

#endif //!CAR_H