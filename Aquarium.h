//
// Created by Benjamin Rousval on 26/01/2020.
//

#ifndef AQUARIUM_AQUARIUM_H
#define AQUARIUM_AQUARIUM_H
#include "Fish.h"
#include "Seaweed.h"
#include <iostream>
#include <vector>


using namespace std;


class Aquarium {
private:

    vector<Fish> fishs;
    vector<Seaweed> seaweeds;
    int turn;

public:

    const vector<Fish> &getFishs() const;
    const vector<Seaweed> &getSeaweeds() const;

    void setFishs(const vector<Fish> &fishs);
    void setSeaweeds(const vector<Seaweed> &seaweeds);

    void addFish(Fish fish);
    void addSeaweed(Seaweed seaweed);

    int getTurn() const;

    void setTurn(int turn);

    void passTime();

    Aquarium();
    Aquarium(const vector<Fish> &fishs, const vector<Seaweed> &seaweeds);

    friend ostream &operator<<(ostream &os, const Aquarium &aquarium);


};


#endif //AQUARIUM_AQUARIUM_H
