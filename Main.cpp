//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <vector>

#include "Main.h"
#include "Aquarium.h"

using namespace std;

int main() {
    cout << "Hey ! Welcome :)" << endl;

    int turn = 0;

    Aquarium aquarium = Aquarium();

    vector<Fish> fishs;
    fishs.push_back(Fish(10, "Michel", true, carpe, aquarium.getTurn()));
    fishs.push_back(Fish(10, "Mathilda", false, poissonClown, aquarium.getTurn()));
    aquarium.setFishs(fishs);

    vector<Seaweed> seaweeds;
    seaweeds.push_back(Seaweed(aquarium.getTurn()));
    seaweeds.push_back(Seaweed(aquarium.getTurn()));
    aquarium.setSeaweeds(seaweeds);

    cout << aquarium << endl;
    aquarium.passTime();
    cout << aquarium << endl;


}