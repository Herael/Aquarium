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
    bool isCarnivorous;
    Breed breed;
    int turn;

public:

    int getHp() const;
    const std::string &getName() const;
    bool isGender() const;
    Breed getBreed() const;
    bool getIsCarnivorous() const;
    int getTurn() const;

    void setHp(int hp);
    void setName(const std::string &name);
    void setGender(bool gender);
    void setBreed(Breed breed);
    void setIsCarnivorous(bool isCarnivorous);
    void setTurn(int turn);

    Fish(int hp, const std::string &name, bool gender, Breed breed, int turn);

    //ToString
    friend std::ostream &operator<<(std::ostream &os, const Fish &fish);

    bool operator==(const Fish &fish) const;
    bool operator!=(const Fish &fish) const;

};


#endif //AQUARIUM_FISH_H
