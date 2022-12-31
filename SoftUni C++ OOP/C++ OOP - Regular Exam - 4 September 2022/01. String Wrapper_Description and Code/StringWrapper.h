//
// Created by St.Petrov on 8.9.2022 г..
//

#ifndef CLION_STRINGWRAPPER_H
#define CLION_STRINGWRAPPER_H
#include "InputParser.h"
#include <iostream>

Input readInput(){
    Input temp;
    std::cin >> temp.line >> temp.letter >> temp.repetitions;
    return temp;
}

class StringWrapper {
    Input input;
    std::string linee;
    char letterrr;
    int reps;

public:
    StringWrapper() {
        this->input.line = linee;
        this->input.repetitions = reps;
        this->input.letter = letterrr;
    };
    StringWrapper(std::string str) {
        this->input.line = str;
        this->linee = str;
    }
    StringWrapper(char a, int b) {
        this->input.letter = a;
        this->letterrr = a;
        this->input.repetitions = b;
        this->reps = b;
    }

    const StringWrapper& getContent() const{
        return *this;
    }


    StringWrapper & append(const StringWrapper & _input) {
        this->input.line += _input.input.line;
        for (int i = 0; i < _input.input.repetitions; i++) {
            this->input.line.push_back(_input.input.letter);
        }
        this->input.repetitions = _input.input.repetitions;
        return *this;
    }

    void printContent(){
            std::cout << this->input.line << std::endl;
    }

};
#endif //CLION_STRINGWRAPPER_H
