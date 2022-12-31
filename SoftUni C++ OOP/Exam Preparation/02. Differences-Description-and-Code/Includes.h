//
// Created by St.Petrov on 8.9.2022 г..
//

#ifndef CLION_INCLUDES_H
#define CLION_INCLUDES_H
#include <vector>
#include "City.h"
#include <iostream>
#include <sstream>

class CityDiff{
public:
std::string name1;
std::string name2;
int population;


    CityDiff(std::string name_, int pop) : name1(name_), population(pop){name2= "";}





};


std::ostream & operator << (std::ostream & ostr, CityDiff& a){
    ostr << a.name1 << std::endl << "population: ";
    if (a.population >= 0){
        ostr << "+" << a.population << std::endl;
    }
    else {
        ostr << a.population << std::endl;
    }
    return ostr;
}

CityDiff operator - (City asd, City dsa){
    std::string nameFirst;
    std::string nameSecond;
    int number;
    if (asd.getName() == dsa.getName()){
        nameFirst = asd.getName();
        nameFirst += " (";
        nameFirst += std::to_string( asd.getCensusYear());
        nameFirst += " vs. ";
        nameFirst += std::to_string(dsa.getCensusYear());
        nameFirst += ")";
        number = asd.getPopulation() - dsa.getPopulation();
    }
    else
    {
        nameFirst = asd.getName();
        nameFirst += " (";
        nameFirst += std::to_string(asd.getCensusYear());
        nameFirst += ") vs. ";
        nameFirst += dsa.getName();
        nameFirst += " (";
        nameFirst += std::to_string(dsa.getCensusYear());
        nameFirst += ")";
        number = asd.getPopulation() - dsa.getPopulation();

    }
    CityDiff a(nameFirst,number);
    return a;
}


std::istream & operator >> (std::istream & asd, City& a){
    std::string name;
    size_t population;
    unsigned int year;
    asd >> name >> population >> year;
    (a) = City(year,name,population);
    return asd;
}



#endif //CLION_INCLUDES_H
