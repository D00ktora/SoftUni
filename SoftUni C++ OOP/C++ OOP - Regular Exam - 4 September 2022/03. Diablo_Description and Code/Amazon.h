//
// Created by St.Petrov on 4.9.2022 г..
//

#ifndef CLION_AMAZON_H
#define CLION_AMAZON_H
#include "BattleField.h"
#include "Structs.h"
#include "Hero.h"


class Amazon: public Hero{

    int counter = AMAZON_PASSIVE_ABILITY_COUNTER;
    int percentage = AMAZON_DAMAGE_INCREASE_PERCENT;
    std::string name = AMAZON_NAME;

public:

    Amazon(VitalData v){
        _vitalData = v;
        _name = AMAZON_NAME;
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

        int curMana = this->_vitalData.currMana;
        std::string nameAmazon = this->name;
        std::string nameStrongSpell = this->_spells[1].name;
        std::string nameWeekSpell = this->_spells[0].name;
        int neededManaStrong = this->_spells[1].manaCost;
        int neededManaWeek = this->_spells[0].manaCost;
        int damageOfStrongSpell = this->_spells[1].damage;
        int damageOfWeekSpell = this->_spells[0].damage;
        if (curMana >= neededManaStrong) {
            counter--;
            if (counter == 0) {
                counter = AMAZON_PASSIVE_ABILITY_COUNTER;
                percentage = damageOfStrongSpell / 4;
                damageOfStrongSpell += percentage;
                std::cout << name << " casting " << nameStrongSpell << " for " << neededManaStrong << " mana" << std::endl;
                this->_vitalData.currMana -= neededManaStrong;
                return damageOfStrongSpell;
            }else {
                std::cout << name << " casting " << nameStrongSpell << " for " << neededManaStrong << " mana" << std::endl;
                this->_vitalData.currMana -= neededManaStrong;
                return damageOfStrongSpell;
            }
        }
        else {
            counter--;
            if (counter==0){
                percentage = damageOfWeekSpell / 4;
                damageOfWeekSpell += percentage;
                counter = AMAZON_PASSIVE_ABILITY_COUNTER;
                std::cout << name << " casting " << nameWeekSpell << " for " << neededManaWeek << " mana" << std::endl;
                return damageOfWeekSpell;
            }
            else{
                std::cout << name << " casting " << nameWeekSpell << " for " << neededManaWeek << " mana" << std::endl;
                return damageOfWeekSpell;
            }
        }
    }

    virtual void takeDamage(int damage){
        std::string nameAmazon = this->name;
        int health = this->_vitalData.health;
        health -= damage;
        this->_vitalData.health -= damage;
        std::cout << name << " took " << damage << " damage and is left with " << health << " health \n";
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

    virtual bool isDead() const {
        int heroHealth = this->_vitalData.health;
        if (heroHealth <= 0){
            heroHealth = 0;
            return true;
        }
        return false;
    }

};
#endif //CLION_AMAZON_H
