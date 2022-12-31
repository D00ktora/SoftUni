//
// Created by St.Petrov on 4.9.2022 г..
//

#ifndef CLION_STORE_H
#define CLION_STORE_H
#include "Defines.h"
#include "Console.h"

#include <iostream>
#include <sstream>
#include <vector>
#include <set>


class Store {
    std::vector<Store> vecPS;
    std::vector<Store> vecXBOX;
    std::vector<Store> vecPS_ForWork;
    std::vector<Store> vecXBOX_ForWork;
ConsoleType type;
int price = 0;
int quantity = 0;
int generation = 0;


public:
    Store() = default;

    Store(int& price_, int& quality_, int& generation_) : price(price_), quantity(quality_), generation(generation_){}

    Store(int& price_, int& quality_) : price(price_), quantity(quality_){}

    void addPs(int& price_, int& quality_, int& generation_){
        Store asd (price_,quality_,generation_);
        asd.type = ConsoleType::PS;
        vecPS.push_back(asd);
        vecPS_ForWork.push_back(asd);
        std::cout << "Adding: PS with generation " << asd.generation << ", price: " << asd.price << ", quality: " << asd.quantity << std::endl;
    }

    void addXbox(int& price_, int& quality_){
        Store asd(price_, quality_);
        type = ConsoleType::XBOX;
        vecXBOX.push_back(asd);
        vecXBOX_ForWork.push_back(asd);
        std::cout << "Adding: Xbox with price: " << asd.price << ", quality: " << asd.quantity << std::endl;
    }


    void remove(ConsoleType& type){
        if (type == ConsoleType::PS){
            Store temp = vecPS_ForWork.back();
            std::cout << "Removing: PS with generation " << temp.generation << ", price: " << temp.price << ", quality: " << temp.quantity << std::endl;
            for (auto it = vecPS.begin(); it!= vecPS.end(); it++) {
                if (((*it).price == temp.price) && ((*it).quantity == temp.quantity) && ((*it).generation == temp.generation)){
                    vecPS.erase(it);
                    vecPS_ForWork.pop_back();
                    break;
                }
            }
            //vecPS.pop_back();
        }
        else if (type == ConsoleType::XBOX){
            Store temp = vecXBOX_ForWork.back();
            std::cout << "Removing: Xbox with price: " << temp.price << ", quality: " << temp.quantity << std::endl;
            for (auto it = vecXBOX.begin(); it != vecXBOX.end(); it++) {
                if (((*it).price == temp.price) && ((*it).quantity == temp.quantity)){
                    vecXBOX.erase(it);
                    vecXBOX_ForWork.pop_back();
                    break;
                }
            }
            //vecXBOX.pop_back();
        }
    }

    void sortByPrice (ConsoleType& type) {
        if (type == ConsoleType::PS){
            std::set<int> setPS;
            std::vector<Store> temp;
            for (auto vec : vecPS) {
                setPS.insert(vec.price);
            }
            for (auto it = setPS.rbegin(); it!= setPS.rend(); it++) {

                int iii = *(it);
                for (int i = 0; i < vecPS.size(); ++i) {
                    if (vecPS[i].price == iii){

                        temp.push_back(vecPS[i]);
                        break;
                    }
                }
                //if (yes){
                 //   break;
                //}
            }
            vecPS = temp;
            std::cout << "Sorting all PS by price " << std::endl;
        }
        else if (type == ConsoleType::XBOX) {
            std::cout << "Sorting all Xbox by price " << std::endl;

            std::set<int> setPS;
            std::vector<Store> temp;
            for (auto vec : vecXBOX) {
                setPS.insert(vec.price);
            }
            for (auto it = setPS.rbegin(); it!= setPS.rend(); it++) {
                bool yes = false;
                int iii = *(it);
                for (int i = 0; i < vecXBOX.size(); ++i) {

                    if (vecXBOX[i].price == iii){
                        yes = true;
                        temp.push_back(vecXBOX[i]);
                        break;
                    }
                }
            }
            vecXBOX = temp;
        }
    }

    void sortByQuality(ConsoleType& consoleType){
        if (consoleType == ConsoleType::PS){
            std::cout << "Sorting all PS by quality " << std::endl;

            std::set<int> setPS;
            std::vector<Store> temp;
            for (auto vec : vecPS) {
                setPS.insert(vec.quantity);
            }
            for (auto it = setPS.rbegin(); it != setPS.rend(); it++) {
                bool yes = false;
                int iii = *(it);
                for (int i = 0; i < vecPS.size(); ++i) {
                    if (vecPS[i].quantity == iii){
                        yes = true;
                        temp.push_back(vecPS[i]);
                        break;
                    }
                }

            }
            vecPS = temp;
        }
        else if (consoleType == ConsoleType::XBOX){
            std::cout << "Sorting all Xbox by quality " << std::endl;

            std::set<int> setPS;
            std::vector<Store> temp;
            for (auto vec : vecXBOX) {
                setPS.insert(vec.quantity);
            }
            for (auto it = setPS.rbegin(); it!= setPS.rend(); it++) {
                bool yes = false;
                int iii = *(it);
                for (int i = 0; i < vecXBOX.size(); ++i) {
                    int quan = *it;
                    if (vecXBOX[i].quantity == iii){
                        yes = true;
                        temp.push_back(vecXBOX[i]);
                        break;
                    }
                }

            }
            vecXBOX = temp;
        }
    }


    void print(ConsoleType type){
        if (type == ConsoleType::PS) {
            std::cout << "Printing all PS data" << std::endl;
            for (int i = 0; i < vecPS.size(); ++i) {
                std::cout << "PS with generation " << vecPS[i].generation << ", price: " << vecPS[i].price << ", quality: "
                << vecPS[i].quantity << std::endl;
            }
        }else {
            std::cout << "Printing all Xbox data" << std::endl;
            for (int i = 0; i < vecXBOX.size(); ++i) {
                std::cout << "Xbox with price: " << vecXBOX[i].price << ", quality: " << vecXBOX[i].quantity << std::endl;
            }
        }
    }

};



#endif //CLION_STORE_H
/*
 *
 *
 *
 *
 *
 *
8
0 0 50 200 1
0 1 150 250
0 1 200 100
0 1 100 150
3 1
4 1
2 1
4 1
 */