//
// Created by Benjamin Rousval on 26/01/2020.
//

#include "Fish.h"
#include <iostream>

using namespace std;

int Fish::getHp() const {
    return hp;
}
const string &Fish::getName() const {
    return name;
}
bool Fish::isGender() const {
    return gender;
}
Breed Fish::getBreed() const {
    return breed;
}
bool Fish::getIsCarnivorous() const {
    return isCarnivorous;
}
int Fish::getTurn() const {
    return turn;
}

void Fish::setHp(int hp) {
    Fish::hp = hp;
}
void Fish::setName(const string &name) {
    Fish::name = name;
}
void Fish::setGender(bool gender) {
    Fish::gender = gender;
}
void Fish::setBreed(Breed breed) {
    Fish::breed = breed;
}
void Fish::setIsCarnivorous(bool isCarnivorous) {
    Fish::isCarnivorous = isCarnivorous;
}
void Fish::setTurn(int turn) {
    Fish::turn = turn;
}


Fish::Fish(int hp, const string &name, bool gender, Breed breed, int turn) : hp(hp), name(name), gender(gender),breed(breed), turn(turn) {
    isCarnivorous = breed == thon || breed == poissonClown || breed == merou;
}


//ToString
ostream &operator<<(ostream &os, const Fish &fish) {
    os << "hp: " << fish.hp
    << " name: " << fish.name
    << " gender: " << fish.gender
    << " breed: " << fish.breed
    << " isCarnivorous: " << fish.isCarnivorous
    << " turn: " << fish.turn;
    return os;
}