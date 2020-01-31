//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <vector>
#include "Aquarium.h"

const std::vector<Fish> &Aquarium::getFishs() const {
    return fishs;
}
const std::vector<Seaweed> &Aquarium::getSeaweeds() const {
    return seaweeds;
}
int Aquarium::getTurn() const {
    return turn;
}

void Aquarium::setFishs(const std::vector<Fish> &fishs) {
    Aquarium::fishs = fishs;
}
void Aquarium::setSeaweeds(const std::vector<Seaweed> &seaweeds) {
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


Aquarium::Aquarium(const std::vector<Fish> &fishs, const std::vector<Seaweed> &seaweeds) : fishs(fishs), seaweeds(seaweeds), turn(0) {}


void Aquarium::passTime() {
    Aquarium::turn += 1;
    //Display all fishs and all seaweeds (fix problem with .begin on vector)
    int i;
    std::cout << "\nTurn : " << Aquarium::turn << std::endl;
    if (Aquarium::fishs.empty()) {
        std::cout << "No fish in water" << std::endl;
    } else {
        std::cout << "Fish : " << std::endl;
        for (i = 0; i < Aquarium::fishs.size(); i++) {
            std::cout << Aquarium::fishs[i] << " \n";
        }
    }

    if (Aquarium::seaweeds.empty()) {
        std::cout << "No seaweed in water" << std::endl;
    } else {
        std::cout << "\nSeaweed : " << Aquarium::seaweeds.size() << std::endl;
    }

//    For display seaweeds with details, use this version :
//
//    if (Aquarium::seaweeds.empty()) {
//        cout << "No seaweed in water" << endl;
//    } else {
//        cout << "\nSeaweed : " << endl;
//        for (i = 0; i < Aquarium::seaweeds.size(); i++) {
//            cout << Aquarium::seaweeds[i] << endl;
//        }
//    }
}

std::vector<Fish> Aquarium::eatFish(std::vector<Fish> fishs, Fish eater) {

//    todo
//    auto predicate = [](Fish &f) {
//        return (f.getHp() <= 0);
//    };

//    auto newEndIterator = remove_if(fishs.begin(), fishs.end(), predicate);
//    fishs.erase(newEndIterator, fishs.end());  // erase everything after "newEndIterator"
//    int ripLittleFish = random()/(fishs.size()-1);
//    if(fishs[ripLittleFish] != eater) {
//        return fishs.erase(ripLittleFish);
//    } else {
//        Aquarium::eatFish(fishs, eater);
//    }
}



Aquarium::Aquarium() {
    this->fishs = std::vector<Fish>();
    this->seaweeds = std::vector<Seaweed>();
    this->turn = 0;
}

std::ostream &operator<<(std::ostream &os, const Aquarium &aquarium) {
    os << "turn: " << aquarium.turn;
    return os;
}