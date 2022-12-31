//
// Created by St.Petrov on 9.8.2022 г..
//

#ifndef CLION_CUTTRANSFORM_H
#define CLION_CUTTRANSFORM_H

#include "string"
#include "TextTransform.h"

class CutTransform : public TextTransform {
    std::string lastCut;
public:
    void invokeOn(std::string& text, int startInd, int endInd) override {
        std::string::iterator startIter = text.begin() + startInd;
        std::string::iterator endIter = text.begin() + endInd;
        this->lastCut = std::string (startIter, endIter);
        text.erase(startIter, endIter);
    }

    std::string getLastCut(){
        return this->lastCut;
    }
};

#endif //CLION_CUTTRANSFORM_H
