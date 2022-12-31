//
// Created by St.Petrov on 5.8.2022 г..
//

#ifndef CLION_REMOVEDUPLICATES_H
#define CLION_REMOVEDUPLICATES_H
#include "list"
#include "set"
#include "Company.h"

void removeDuplicates(std::list<Company *>& comp)
{
    std::set<Company *> ptrs;
    std::set<std::string> names;

    std::list<Company *>::iterator it = comp.begin();

    while (it!= comp.end())
    {
        Company* curC = *it;

        if (ptrs.find(curC) != ptrs.end())
        {
            it=comp.erase(it);
        }
        else
        {
            if(names.find(curC->getName()) != names.end())
            {
                it = comp.erase(it);
                //delete curC;
            }
            else
            {
                ptrs.insert(curC);
                names.insert(curC->getName());
                it++;
            }
        }
    }



}



#endif //CLION_REMOVEDUPLICATES_H
