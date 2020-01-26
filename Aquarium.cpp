//
// Created by Benjamin Rousval on 26/01/2020.
//

#include "Aquarium.h"


const vector<Fish> &Aquarium::getFishs() const {
    return fishs;
}

void Aquarium::setFishs(const vector<Fish> &fishs) {
    Aquarium::fishs = fishs;
}

const vector<Seaweed> &Aquarium::getSeaweeds() const {
    return seaweeds;
}

void Aquarium::setSeaweeds(const vector<Seaweed> &seaweeds) {
    Aquarium::seaweeds = seaweeds;
}

void Aquarium::addFish(const Fish fish) {
    Aquarium::fishs.push_back(fish);
}

void Aquarium::addSeaweed(Seaweed seaweed) {
    Aquarium::seaweeds.push_back(seaweed);
}



Aquarium::Aquarium(const vector<Fish> &fishs, const vector<Seaweed> &seaweeds) : fishs(fishs), seaweeds(seaweeds) {}

void Aquarium::passTime() {
    //Do somethings
}



