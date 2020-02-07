//
// Created by Benjamin Rousval on 26/01/2020.
//

#include "Seaweed.h"

int Seaweed::getHp() {
    return hp;
}
int Seaweed::getTurn() {
    return turn;
}

void Seaweed::setHp(int h) {
    Seaweed::hp = h;
}
void Seaweed::setTurn(int t) {
    Seaweed::turn = t;
}

Seaweed::Seaweed() {
    this->hp = 10;
    this->turn = 0;
}

Seaweed::Seaweed(int hp, int turn) {
    this->hp = hp;
    this->turn = turn;
}