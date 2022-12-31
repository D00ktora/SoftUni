//
// Created by St.Petrov on 9.8.2022 г..
//

#ifndef CLION_INITIALIZATION_H
#define CLION_INITIALIZATION_H

#include "CommandInterface.h"
#include "AdvancedCommandInterface.h"

#include "memory"
#include "string"

std::shared_ptr<CommandInterface> buildCommandInterface(std::string& text){
    auto interface = std::make_shared<AdvancedCommandInterface>(text);
    interface->init();
    return interface;
}

#endif //CLION_INITIALIZATION_H
