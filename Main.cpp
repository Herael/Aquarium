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

    std::vector<Fish> fishs;
    fishs.push_back(Fish::createFish(10, "Michel", true, carpe, 0));
    fishs.push_back(Fish::createFish(4, "Mathilda", false, poissonClown, 0));
    fishs.push_back(Fish::createFish(10, "Maurice", true, bar, 0));

    Seaweed seaweed = Seaweed();
    Seaweed seaweedBis = Seaweed();
    Seaweed seaweedTer = Seaweed();
    Seaweed seaweedAuBoutDeLaRue = Seaweed();
    Seaweed seaweedDuJardin = Seaweed();
    Seaweed seaweedJaiPlusDidee = Seaweed();

    std::vector<Seaweed> seaweeds;
    seaweeds.push_back(seaweed);
    seaweeds.push_back(seaweedBis);
    seaweeds.push_back(seaweedTer);
    seaweeds.push_back(seaweedAuBoutDeLaRue);
    seaweeds.push_back(seaweedDuJardin);
    seaweeds.push_back(seaweedJaiPlusDidee);


    Aquarium aquarium = Aquarium(fishs, seaweeds);

    aquarium.passTime();

}