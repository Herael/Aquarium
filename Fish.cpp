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
Fish::Breed Fish::getBreed() const {
    return breed;
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
void Fish::setBreed(Fish::Breed breed) {
    Fish::breed = breed;
}

Fish::Fish(int hp, const string &name, bool gender, Fish::Breed breed) : hp(hp), name(name), gender(gender),breed(breed) {}


//ToString
ostream &operator<<(ostream &os, const Fish &fish) {
    os << "hp: " << fish.hp << " name: " << fish.name << " gender: " << fish.gender << " breed: " << fish.breed;
    return os;
}
