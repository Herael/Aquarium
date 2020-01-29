//
// Created by Benjamin Rousval on 26/01/2020.
//

#include "Seaweed.h"

int Seaweed::getHp() const {
    return hp;
}
int Seaweed::getTurn() const {
    return turn;
}

void Seaweed::setHp(int hp) {
    Seaweed::hp = hp;
}
void Seaweed::setTurn(int turn) {
    Seaweed::turn = turn;
}

Seaweed::Seaweed(int turn) :turn(turn) {
    this->hp = 10;
}

std::ostream &operator<<(std::ostream &os, const Seaweed &seaweed) {
    os << "hp: " << seaweed.hp << " turn: " << seaweed.turn;
    return os;
}


