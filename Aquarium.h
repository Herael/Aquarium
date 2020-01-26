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

public:

    const vector<Fish> &getFishs() const;
    const vector<Seaweed> &getSeaweeds() const;

    void setFishs(const vector<Fish> &fishs);
    void setSeaweeds(const vector<Seaweed> &seaweeds);

    void addFish(Fish fish);
    void addSeaweed(Seaweed seaweed);
    static void passTime();

    Aquarium(const vector<Fish> &fishs, const vector<Seaweed> &seaweeds);


};


#endif //AQUARIUM_AQUARIUM_H
