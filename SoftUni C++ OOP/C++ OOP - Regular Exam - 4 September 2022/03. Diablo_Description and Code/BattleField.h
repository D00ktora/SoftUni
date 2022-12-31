//
// Created by St.Petrov on 4.9.2022 г..
//

#ifndef CLION_BATTLEFIELD_H
#define CLION_BATTLEFIELD_H
#include <vector>
#include <iostream>
#include <memory>
#include "Hero.h"
#include "Barbarian.h"
#include "Amazon.h"

class BattleField{

    std::vector<std::unique_ptr<Hero>> _heroes;

public:

    void createHeroes();
    void createSpells();
    void startBattle();

    virtual void printWinner(const std::unique_ptr<Hero>& hero);

};



#endif //CLION_BATTLEFIELD_H
