//
// Created by St.Petrov on 8.9.2022 г..
//

#ifndef CLION_CITYUTILS_H
#define CLION_CITYUTILS_H
#include "City.h"
#include <iostream>
#include <map>
#include <vector>
City* initCity(std::string name, size_t population ){
    City* h = new City(name, population);
    return h;
}



std::map<size_t, City*> groupByPopulation(std::vector<const City*> vecOfCitys, size_t& total){
    std::map<size_t, City*> mySet;
    total = 0;
    for (auto it = vecOfCitys.begin(); it != vecOfCitys.end(); it++) {
        City* h = new City((*it)->getName(), (*it)->getPopulation());
        mySet[(*it)->getPopulation()] = h;
        total += h->getPopulation();
    }
    return mySet;
}

#endif //CLION_CITYUTILS_H
