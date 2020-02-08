//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <vector>
#include "Main.h"
#include "Aquarium.h"


int main() {

    std::cout << "Hey ! Welcome :)" << std::endl;
    int turn = 2;
    int save = 1;

    Aquarium aquarium = Aquarium();
    aquarium.initFish();
    aquarium.initSeaweed();

    for (int i = 0; i < turn; i++) {
        std::cout << "Tours : " << i + 1 << std::endl;
        aquarium.passTime(i == save);
    }
}