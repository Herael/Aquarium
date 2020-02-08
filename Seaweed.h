//
// Created by Benjamin Rousval on 26/01/2020.
//

#ifndef AQUARIUM_SEAWEED_H
#define AQUARIUM_SEAWEED_H

#include <ostream>

class Seaweed {
private:
    int hp;
    int turn;

public:

    int getHp();
    int getTurn();

    void setHp(int i);
    void setTurn(int i);

    Seaweed();
    Seaweed(int hp, int turn);

    friend std::ostream &operator<<(std::ostream &os, const Seaweed &seaweed);
};

#endif //AQUARIUM_SEAWEED_H


