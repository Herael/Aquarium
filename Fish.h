//
// Created by Benjamin Rousval on 26/01/2020.
//

#ifndef AQUARIUM_FISH_H
#define AQUARIUM_FISH_H
#include <iostream>

using namespace std;

class Fish {
private:
    int hp;
    string name;
    bool gender;
    enum Breed {merou, thon, poissonClown, sole, bar, carpe};
    Breed breed;

public:

    int getHp() const;
    const string &getName() const;
    bool isGender() const;
    Breed getBreed() const;

    void setHp(int hp);
    void setName(const string &name);
    void setGender(bool gender);
    void setBreed(Breed breed);


    Fish(int hp, const string &name, bool gender, Breed breed);

    //ToString
    friend ostream &operator<<(ostream &os, const Fish &fish);
};


#endif //AQUARIUM_FISH_H
