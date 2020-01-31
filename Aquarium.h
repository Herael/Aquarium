//
// Created by Benjamin Rousval on 26/01/2020.
//

#ifndef AQUARIUM_AQUARIUM_H
#define AQUARIUM_AQUARIUM_H
#include "Fish.h"
#include "Seaweed.h"
#include <iostream>
#include <vector>

class Aquarium {
private:

    std::vector<Fish> fishs;
    std::vector<Seaweed> seaweeds;
    int turn;

public:

    const std::vector<Fish> &getFishs() const;
    const std::vector<Seaweed> &getSeaweeds() const;
    int getTurn() const;

    void setFishs(const std::vector<Fish> &fishs);
    void setSeaweeds(const std::vector<Seaweed> &seaweeds);
    void setTurn(int turn);

    void addFish(Fish fish);
    void addSeaweed(Seaweed seaweed);

    void passTime();

    Aquarium();
    Aquarium(const std::vector<Fish> &fishs, const std::vector<Seaweed> &seaweeds);

    std::vector<Fish> eatFish(std::vector<Fish> fishs, Fish eater);

    friend std::ostream &operator<<(std::ostream &os, const Aquarium &aquarium);

};

#endif //AQUARIUM_AQUARIUM_H
