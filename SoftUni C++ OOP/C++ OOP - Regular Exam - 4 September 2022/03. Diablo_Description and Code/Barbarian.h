//
// Created by St.Petrov on 4.9.2022 г..
//

#ifndef CLION_BARBARIAN_H
#define CLION_BARBARIAN_H
#include "BattleField.h"
#include "Structs.h"
#include "Hero.h"


class Barbarian : public Hero {
    int counter = BARBARIAN_PASSIVE_ABILITY_COUNTER;
    int percent = 2;
    std::string name = BARBARIAN_NAME;

public:

    Barbarian(VitalData v){
        _vitalData = v;
        _name = BARBARIAN_NAME;
    }

    virtual void readSpellFromInput(SpellType spellType){
        std::string line;
        SpellData newSpell;
        std::getline(std::cin, line);
        std::istringstream input1(line);
        input1 >> newSpell.name >> newSpell.damage >> newSpell.manaCost;
        if (spellType == SpellType::Weak){
            this->_spells[0] = newSpell;
        }
        else if (spellType == SpellType::Strong){
            this->_spells[1] = newSpell;
        }
    }

    virtual int castSpell(){
        std::string nameBarbarian = this->name;
        std::string spellNameStrong = this->_spells[1].name;
        std::string spellNameWeek = this->_spells[0].name;
        int curMana = this->_vitalData.currMana;
        int neededManaStrong = this->_spells[1].manaCost;
        int neededManaWeek = this->_spells[0].manaCost;
        int damageOfStrongSpell = this->_spells[1].damage;
        int damageOfWeekSpell = this->_spells[0].damage;
        if (curMana >= neededManaStrong){
            std::cout << name << " casting " << spellNameStrong << " for " << neededManaStrong << " mana" << std::endl;
            this->_vitalData.currMana -= neededManaStrong;
            return damageOfStrongSpell;
        }
        else {
            std::cout << name << " casting " << spellNameWeek << " for " << neededManaWeek << " mana" << std::endl;
            this->_vitalData.currMana -= neededManaWeek;
            return damageOfWeekSpell;
        }
    }

    virtual void takeDamage(int damage){
        counter--;
        std::string nameBarbarian = this->name;
        int health = this->_vitalData.health;
        if (counter == 0 ){
            damage /= 2;
            health -= damage;
            this->_vitalData.health -= damage;
            std::cout << name << " took " << damage << " damage and is left with " << health << " health \n";
            counter = BARBARIAN_PASSIVE_ABILITY_COUNTER;
        }else {
            health -= damage;
            this->_vitalData.health -= damage;
            std::cout << name << " took " << damage << " damage and is left with " << health << " health \n";
        }
    }

    virtual void regenerate(){
        int regen = this->_vitalData.manaRegenRate;
        if (this->_vitalData.currMana < this->_vitalData.maxMana){
            if ((this->_vitalData.currMana + this->_vitalData.manaRegenRate) > this->_vitalData.maxMana){
                regen = this->_vitalData.maxMana - this->_vitalData.currMana;
                this->_vitalData.currMana = this->_vitalData.maxMana;
            }
            else
            this->_vitalData.currMana += this->_vitalData.manaRegenRate;
        }
        std::string nameAmazon = this->name;
        int curMana = this->_vitalData.currMana;

        std::cout << name << " regained " << regen << " mana for up to " << curMana << std::endl;
    }

    virtual bool isDead() const{
        int heroHealth = this->_vitalData.health;
        if (heroHealth <= 0){
            heroHealth = 0;
            return true;
        }
        return false;
    }

};


#endif //CLION_BARBARIAN_H
