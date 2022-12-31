//
// Created by St.Petrov on 27.8.2022 г..
//

#ifndef CLION_PARSER_H
#define CLION_PARSER_H

template<typename T>

class Parser
{
    std::istream& in;
    std::string stopLine;
public:
    Parser(std::istream& in, std::string stopLine)
            : in(in), stopLine(stopLine) {}


    bool readNext(T& next) {
        std::string line;
        std::getline(this->in, line);

        if (line != this->stopLine) {
            std::istringstream lineIn(line);
            lineIn >> next;
            return true;
        }
        else {
            return false;
        }
    }

};



#endif //CLION_PARSER_H
