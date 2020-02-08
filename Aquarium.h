//
// Created by Benjamin Rousval on 26/01/2020.
//

#ifndef AQUARIUM_AQUARIUM_H
#define AQUARIUM_AQUARIUM_H
#include <iostream>
#include <vector>
#include "Fish.h"
#include "Seaweed.h"

class Aquarium {
private:
    std::vector<Fish> fishs;
    std::vector<Seaweed> seaweeds;
    int turn;

public:

    int getTurn();

    Aquarium();
    Aquarium(std::vector<Fish> fishs, std::vector<Seaweed> seaweeds);

    static void addFish(std::string name, bool gender);
    void addSeaweed(Seaweed s);

    void initFish();
    void initSeaweed();

    void bouji();
    void changeGender();
    void eatFish();
    void sweeper(); //todo
    void growthSeaweed();
    void overage();

    void passTime();
};

#endif //AQUARIUM_AQUARIUM_H
