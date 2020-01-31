//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <vector>

#include "Main.h"
#include "Aquarium.h"


int main() {

    std::cout << "Hey ! Welcome :)" << std::endl;
    int turn = 0;
    Aquarium aquarium = Aquarium();

    std::vector<Fish> fishs;
    fishs.push_back(Fish(10, "Michel", true, carpe, aquarium.getTurn()));
    fishs.push_back(Fish(10, "Mathilda", false, poissonClown, aquarium.getTurn()));
    aquarium.setFishs(fishs);


    auto it = fishs.begin();

    std::vector<Seaweed> seaweeds;
    seaweeds.push_back(Seaweed(aquarium.getTurn()));
    seaweeds.push_back(Seaweed(aquarium.getTurn()));
    aquarium.setSeaweeds(seaweeds);
    do{





        aquarium.passTime();
    }while(aquarium.getTurn() < 10);
}