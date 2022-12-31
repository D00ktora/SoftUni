//
// Created by St.Petrov on 9.8.2022 г..
//


#include "DesertEagle.h"

DesertEagle::DesertEagle(const int damagePerRound, const int clipSize, const int remainingAmmo) : Pistol(damagePerRound, clipSize, remainingAmmo){}

bool DesertEagle::fire(PlayerVitalData &enemyPlayerData) {
    if (0==_currClipBullets){
        Pistol::reload();
        return false;
    }

    const int ARMOR_MODIFIER = _damagePerRound / 4;
    const int HEALTH_MODIFIER = _damagePerRound - ARMOR_MODIFIER;

    enemyPlayerData.armor -= ARMOR_MODIFIER;

    if (0 > enemyPlayerData.armor) {
        enemyPlayerData.health += enemyPlayerData.armor;
        enemyPlayerData.armor = 0;
    }

    enemyPlayerData.health -= HEALTH_MODIFIER;

    --_currClipBullets;

    std::cout << "Enemy left with: " << enemyPlayerData.health << " health and " << enemyPlayerData.armor << " armor" << std::endl;

    if (0>= enemyPlayerData.health)
    {
        return true;
    }

    return false;
}