//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <vector>

#include "Aquarium.h"



const vector<Fish> &Aquarium::getFishs() const {
    return fishs;
}
const vector<Seaweed> &Aquarium::getSeaweeds() const {
    return seaweeds;
}
int Aquarium::getTurn() const {
    return turn;
}

void Aquarium::setFishs(const vector<Fish> &fishs) {
    Aquarium::fishs = fishs;
}
void Aquarium::setSeaweeds(const vector<Seaweed> &seaweeds) {
    Aquarium::seaweeds = seaweeds;
}
void Aquarium::setTurn(int turn) {
    Aquarium::turn = turn;
}


void Aquarium::addFish(const Fish fish) {
    Aquarium::fishs.push_back(fish);
}
void Aquarium::addSeaweed(Seaweed seaweed) {
    Aquarium::seaweeds.push_back(seaweed);
}


Aquarium::Aquarium(const vector<Fish> &fishs, const vector<Seaweed> &seaweeds) : fishs(fishs), seaweeds(seaweeds), turn(0) {}


void Aquarium::passTime() {
    Aquarium::turn += 1;
    //Display all fishs and all seaweeds (fix problem with .begin on vector)

}


Aquarium::Aquarium() {
    this->fishs = vector<Fish>();
    this->seaweeds = vector<Seaweed>();
    this->turn = 0;
}

ostream &operator<<(ostream &os, const Aquarium &aquarium) {
    os << "turn: " << aquarium.turn;
    return os;
}