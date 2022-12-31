//
// Created by St.Petrov on 21.8.2022 г..
//
#include "Defines.h"
#include "iostream"
#include "vector"
#include "sstream"

ErrorCode executeCommand(const std::string &  command, std::vector<int *> & memory){

    ErrorCode code;
    std::string temp;
    int num;
    std::stringstream inp(command);
    inp >> temp;
    inp >> num;

    if (temp[0] == 'A'){
        if (num<memory.size() && num >= 0){

            if (memory[num] != nullptr){
                code = MEMORY_LEAK;
                return code;
            }
            memory[num] = new int;
            code = EXECUTE_SUCCESS;
            return code;
        }
        else {
            code = INDEX_OUT_OF_BOUND;
            return code;
        }
    }else if (temp[0] == 'D'){
        if(num<memory.size() && num >= 0){
            if (memory[num] == nullptr){
                code = DOUBLE_FREE;
                return code;
            }
            delete memory[num];
            memory[num] = nullptr;
            code = EXECUTE_SUCCESS;
            return code;
        }else {
            code = INDEX_OUT_OF_BOUND;
            return code;
        }
    }else if (temp[0] == 'I'){
            code = EXECUTE_IDLE;
        return code;
    }
}

void printResult(const ErrorCode errorCode, const std::string & command){

    switch (errorCode) {
        case EXECUTE_SUCCESS:
            std::cout << command << " - success" << std::endl;
            break;

        case EXECUTE_IDLE:
            std::cout << command << " - this exam is a piece of cake! Where is the OOP already?!?" << std::endl;
            break;

        case MEMORY_LEAK:
            std::cout << command << " - memory leak prevented, will not make allocation" << std::endl;
            break;

        case DOUBLE_FREE:
            std::cout << command << " - system crash prevented, will skip this deallocation" << std::endl;
            break;

        case INDEX_OUT_OF_BOUND:
            std::cout << command << " - out of bound" << std::endl;
            break;
    }


}
