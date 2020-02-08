//
// Created by Benjamin Rousval on 26/01/2020.
//

#ifndef AQUARIUM_FISH_H
#define AQUARIUM_FISH_H
#include <iostream>
#include <vector>

enum Breed {merou, thon, poissonClown, sole, bar, carpe};

class Fish {
private:
    int hp;
    std::string name;
    bool gender;
    bool carnivorous;
    Breed breed;
    int turn;

public:
    Fish(int hp, std::string name, bool gender, bool carnivorous, Breed breed , int turn);
    static Fish createFish(int hp, std::string name,bool gender, Breed breed, int turn);

    int getHp();
    std::string getName();
    bool getGender();
    bool getCarnivorous();
    Breed getBreed();
    int getTurn();


    void setHp(int i);
    void setName(std::string n);
    void setGender(bool g);
    void setCarnivorous(bool c);
    void setBreed(Breed b);
    void setTurn(int t);

    bool operator==(const Fish &fish) const;
    bool operator!=(const Fish &fish) const;

    friend std::ostream &operator<<(std::ostream &os, const Fish &fish);
};

#endif