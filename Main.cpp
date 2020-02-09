//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <fstream>
#include "Main.h"
#include "Aquarium.h"


int main() {

    std::cout << "Hey ! Welcome :)" << std::endl;
    int turn = 10;
    int save = 6;

    Aquarium aquarium = Aquarium();
    aquarium.initFish();
    aquarium.initSeaweed();

    std::ofstream out("out.txt");
    auto coutbuf = std::cout.rdbuf(out.rdbuf()); //save and redirect

    for (int i = 0; i < turn; i++) {
        std::cout << "Tours : " << i + 1 << std::endl;
        aquarium.passTime(i == save);
    }
    out.close();
    std::cout.rdbuf(coutbuf); //reset to standard output again
    std::ifstream f("out.txt");
    if (f.is_open())
        std::cout << f.rdbuf();
    f.close();
}