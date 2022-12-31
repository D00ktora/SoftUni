//
// Created by St.Petrov on 6.8.2022 г..
//

#ifndef CLION_TYPEDSTREAM_H
#define CLION_TYPEDSTREAM_H

#include <sstream>
#include "vector"
#include "Vector2D.h"

template <typename T>
class TypedStream
{
protected:
    std::istringstream stream;
public:
    TypedStream(const std::string& input) : stream(input) {}

    virtual TypedStream<T>& operator >> (T& t){
        return *this;
    }

    std::vector<T> readToEnd(){
        std::vector<T> items;
        T item;
        this->operator>>(item);
        while (this->stream){
            items.push_back(item);
            this->operator>>(item);
        }
        return items;
    }
};



#endif //CLION_TYPEDSTREAM_H
