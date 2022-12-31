//
// Created by St.Petrov on 2.9.2022 г..
//

#ifndef CLION_VECTORCOMPARISONS_H
#define CLION_VECTORCOMPARISONS_H
#include "Vector.h"

struct VectorLengthComparer
{
    bool operator ()(const Vector& a, const Vector& b) const {
        return a.getLengthSq() < b.getLengthSq();
    }
};


template <typename T, typename Comp>
class ReverseComparer
{
    Comp comparar;
public:
    bool operator ()(const T& a, const T& b) const
    {
        return comparar(b, a);
    }
};


#endif //CLION_VECTORCOMPARISONS_H
