//
// Created by St.Petrov on 25.8.2022 г..
//
#include "Article13Filter.h"

#include <string>

#include <set>

Article13Filter::Article13Filter(std::set<std::string> copyrighted) {
    this->copyrighted = copyrighted;
}
bool Article13Filter::blockIfCopyrighted(std::string s){
    for (auto i = copyrighted.begin(); i!= copyrighted.end(); i++ ) {
        if ((*i) == s) {
            this->blocked.push_back(s);
            return true;
        }
    }
    return false;
}

bool Article13Filter::isCopyrighted(std::string s){
    return false;
}

std::vector<std::string> Article13Filter::getBlocked(){
    return this->blocked;
}