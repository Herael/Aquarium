//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <vector>
#include "Aquarium.h"


int Aquarium::getTurn() {
    return this->turn;
}

Aquarium::Aquarium(){
    this->fishs = std::vector<Fish>();
    this->seaweeds = std::vector<Seaweed>();
    this->turn = 0;
}

// works
Aquarium::Aquarium(std::vector<Fish> fishs, std::vector<Seaweed> seaweeds){
    this->fishs = fishs;
    this->seaweeds = seaweeds;
    this->turn = 0;
}

void Aquarium::addFish(std::string name, bool gender) {
    Fish f = Fish::createFish(10, name, gender, thon, 0);
}

void Aquarium::addSeaweed(Seaweed s) {
    this->seaweeds.push_back(s);
}

void Aquarium::eatFish() {
    srand(time(NULL));
    int victim = 0;
    for(int i = 0; i < this->fishs.size(); ++i) {
        if(this->fishs[i].getHp() > 0){
            this->fishs[i].setHp(this->fishs[i].getHp()-1);
            if(this->fishs[i].getCarnivorous() && this->fishs[i].getHp() <= 5) {
                victim = rand() % this->fishs.size();
                if(victim != i && this->fishs[i].getBreed() != this->fishs[victim].getBreed()){
                    this->fishs[victim].setHp(this->fishs[victim].getHp()-4);
                    this->fishs[i].setHp(this->fishs[i].getHp()+5);
                    std::cout << "Le poisson " << this->fishs[i].getName() << " a mangé le poisson " << this->fishs[victim].getName() << std::endl;
                }else {
                    std::cout << "Le poisson " << this->fishs[i].getName() << " s'est fait citrouille" << std::endl;
                }
            }

            else if(!this->fishs[i].getCarnivorous()) {
                victim = rand() % this->seaweeds.size();
                this->seaweeds[victim].setHp(this->seaweeds[victim].getHp()-2);
                this->fishs[i].setHp(this->fishs[i].getHp()+3);
                std::cout << "Le poisson " << this->fishs[i].getName() << " a mangé l'algue " << victim << std::endl;
            }
        }
    }
}



/**
 * AKA : La balayeuse de la propreté
 */
void Aquarium::sweeper() {

    //todo
//    auto predicate = [](Fish &f) {
//        return (f.getHp() <= 0);
//    };
//    auto Iterator = remove_if(this->fishs.begin(), this->fishs.end(), predicate);
//    this->fishs.erase(Iterator, this->fishs.end());
//
//    auto Iterator2 = remove_if(this->fishs.begin(), this->fishs.end(), predicate);
//    this->fishs.erase(Iterator2, this->fishs.end());

}

void Aquarium::growthSeaweed() {
    for (int i = 0; i < this->seaweeds.size(); ++i) {
        seaweeds[i].setHp(seaweeds[i].getHp()+1);
    }
}


void Aquarium::passTime() {

    eatFish();
    sweeper(); //todo

    growthSeaweed();



    this->turn+=1;
    int i;
    std::cout << "\nFishs :" << std::endl;
    for(i = 0; i < this->fishs.size(); i++)
        std::cout << "Name : " << this->fishs[i].getName() << " / Hp : " << this->fishs[i].getHp() << std::endl;

    std::cout << "\nQuantity of seaweeds : " << this->seaweeds.size() << std::endl;
}
