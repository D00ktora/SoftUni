//
// Created by St.Petrov on 25.8.2022 г..
//

#ifndef CLION_PRINTUTILS_H
#define CLION_PRINTUTILS_H
#include "iostream"
#include "sstream"
#include "string"

template<typename T>
void printVector(std::vector<T> v) {
    for (T& element : v) {
        std::cout << element << " ";
    }
};


#endif //CLION_PRINTUTILS_H
