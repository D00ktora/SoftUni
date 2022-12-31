//
// Created by St.Petrov on 13.8.2022 г..
//

#ifndef CLION_COMPANYMEMORYUTILS_H
#define CLION_COMPANYMEMORYUTILS_H


#include "Company.h"


std::vector<Company> readCompaniesFromMemory(unsigned char* & memory, int & numCompanies){

    int ids;
    std::string names;
    std::vector<std::pair<char, char> > employeess;
    std::vector<Company>a;

    bool oneRun = true;
    for(int i=0; i<numCompanies; i++){

        int j;
        while (memory[j] != 0) {
            if(oneRun){
                j=0;
                ids = memory[j];
                oneRun= false;
                j++;
            }
            names += memory[j];
            j++;
        }
        j++;
        int numberOfEmploys = memory[j];
        j++;
        std::pair<char, char> temp1;
        for(int emp = 0; emp< numberOfEmploys; emp++){
            temp1.first = memory[j];
            j++;
            temp1.second = memory[j];
            j++;
            employeess.push_back(temp1);
        }
        Company MyCompany (ids, names, employeess);
        ids=memory[j];
        j++;
        names= "";
        employeess.clear();
        a.push_back(MyCompany);
    }
    return a;
}



#endif //CLION_COMPANYMEMORYUTILS_H
