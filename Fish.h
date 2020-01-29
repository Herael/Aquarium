//
// Created by Benjamin Rousval on 26/01/2020.
//

#ifndef AQUARIUM_FISH_H
#define AQUARIUM_FISH_H
#include <iostream>

using namespace std;

enum Breed {merou, thon, poissonClown, sole, bar, carpe};

class Fish {
private:
    int hp;
    string name;
    bool gender;
    bool isCarnivorous;
    Breed breed;
    int turn;

public:

    int getHp() const;
    const string &getName() const;
    bool isGender() const;
    Breed getBreed() const;
    bool getIsCarnivorous() const;
    int getTurn() const;

    void setHp(int hp);
    void setName(const string &name);
    void setGender(bool gender);
    void setBreed(Breed breed);
    void setIsCarnivorous(bool isCarnivorous);
    void setTurn(int turn);


    Fish(int hp, const string &name, bool gender, Breed breed, int turn);

    //ToString
    friend ostream &operator<<(ostream &os, const Fish &fish);
};


#endif //AQUARIUM_FISH_H
