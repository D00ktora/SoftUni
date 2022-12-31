//
// Created by St.Petrov on 9.8.2022 г..
//

#include "Player.h"
#include "Glock.h"
#include "DesertEagle.h"

void Player::buyPistol(const PistolType pistolType, const int damagePerRound, const int clipSize,
                       const int remainingAmmo) {
    if (PistolType::GLOCK == pistolType)
    {
        _pistol = new Glock(damagePerRound, clipSize, remainingAmmo);
    }
    else{
        _pistol = new DesertEagle(damagePerRound, clipSize, remainingAmmo);
    }
}