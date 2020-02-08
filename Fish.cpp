//
// Created by Benjamin Rousval on 26/01/2020.
//

#include "Fish.h"

Fish::Fish(int hp, std::string name, bool gender, bool carnivorous, Breed breed, int turn){
    this->hp = hp;
    this->name = name;
    this->gender = gender;
    this->carnivorous = carnivorous;
    this->breed = breed;
    this->turn = turn;
}

Fish Fish::createFish(int hp, std::string name, bool gender, Breed breed, int turn) {
    bool c = false;
    if(breed == merou || breed == thon || breed == poissonClown){
        c = true;
    }
    return Fish(hp, name, gender, c, breed, turn);
}

int Fish::getHp(){
    return this->hp;
}
void Fish::setHp(int i){
    this->hp = i;
}

std::string Fish::getName(){
        return this->name;
}
void Fish::setName(std::string n){
        this->name = n;
}

bool Fish::getGender(){
    return this->gender;
}
void Fish::setGender(bool g){
    this->gender = g;
}

bool Fish::getCarnivorous(){
    return this->carnivorous;
}
void Fish::setCarnivorous(bool c){
    this->gender = c;
}

Breed Fish::getBreed(){
    return this->breed;
}
void Fish::setBreed(Breed b){
    this->breed = b;
}

int Fish::getTurn(){
    return this->turn;
}
void Fish::setTurn(int i){
    this->turn = i;
}


bool Fish::operator==(const Fish &f) const {
    return (hp == f.hp && name == f.name && gender == f.gender && carnivorous == f.carnivorous && breed == f.breed && turn == f.turn);
}

bool Fish::operator!=(const Fish &f) const {
    return !(f == *this);
}

std::ostream &operator<<(std::ostream &os, const Fish &fish) {
    os << "hp: " << fish.hp << " name: " << fish.name << " gender: " << fish.gender << " carnivorous: "
       << fish.carnivorous << " breed: " << fish.breed << " turn: " << fish.turn;
    return os;
}
