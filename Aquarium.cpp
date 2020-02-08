//
// Created by Benjamin Rousval on 26/01/2020.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Aquarium.h"

void Aquarium::initFish() {

    this->fishs.push_back(Fish::createFish(10, "Michel", true, bar, 10));
    this->fishs.push_back(Fish::createFish(4, "Mathilda", false, poissonClown, 19));
    this->fishs.push_back(Fish::createFish(10, "Maurice", true, bar, 0));

}

void Aquarium::initSeaweed() {

    for (int i = 0; i < 4; i++)
        addSeaweed(Seaweed());

    Seaweed oldSeaweed = Seaweed(10, 24);
    addSeaweed(oldSeaweed);
}

Aquarium::Aquarium(){
    this->fishs = std::vector<Fish>();
    this->seaweeds = std::vector<Seaweed>();
    this->turn = 0;
}

int Aquarium::getTurn() {
    return this->turn;
}

Aquarium::Aquarium(std::vector<Fish> fishs, std::vector<Seaweed> seaweeds){
    this->fishs = fishs;
    this->seaweeds = seaweeds;
    this->turn = 0;
}

void Aquarium::addSeaweed(Seaweed s) {
    this->seaweeds.push_back(s);
}

void Aquarium::changeGender() {

    for(int i = 0; i < this->fishs.size(); i++) {
        if (this->fishs[i].getBreed() == bar || this->fishs[i].getBreed() == merou){
            if (this->fishs[i].getTurn() == 10) {
                this->fishs[i].setGender(!this->fishs[i].getGender());
                std::cout << this->fishs[i].getName() << " à changé de sexe." << std::endl;
            }
        }
    }
//    for(auto & fish : this->fishs) {
//        if (fish.getBreed() == bar || fish.getBreed() == merou){
//            if (fish.getTurn() == 10) {
//                fish.setGender(!fish.getGender());
//            }
//        }
//    }
}


void Aquarium::bouji(){
    srand(time(NULL));
    int crush = 0;
    int fishSize = this->fishs.size();
    int seaweedSize = this->seaweeds.size();
    for(int i = 0; i < fishSize; i++) {
        if (this->fishs[i].getHp() > 5) {
            crush = rand() % this->fishs.size();

            //different breed
            if(this->fishs[i].getBreed() != this->fishs[crush].getBreed()){
                break;
            }
            //same gender
            if(this->fishs[i].getGender() == this->fishs[crush].getGender() && crush != i){

                if(this->fishs[i].getBreed() != sole && this->fishs[crush].getBreed() != sole){
                    if(this->fishs[i].getBreed() != poissonClown && this->fishs[crush].getBreed() != poissonClown) {
                        break;
                    }
                }
                this->fishs[i].setGender(!this->fishs[i].getGender());
                std::cout << this->fishs[i].getName() << " à changé de sexe pour : " << this->fishs[crush].getName() << std::endl;
            }

            if(this->fishs[i].getGender() != this->fishs[crush].getGender()) {
                std::string name = this->fishs[i].getName() + "-" + this->fishs[crush].getName();
                bool gender = rand() % 2;
                Fish f = Fish::createFish(10, name, gender, this->fishs[i].getBreed(), 0);
                this->fishs.push_back(f);
                std::cout << this->fishs[i].getName() << " a complètement bouji  " << this->fishs[crush].getName() << " pour donner naissance à : " << f.getName() << std::endl;
            }
        }
    }
    if(fishSize == this->fishs.size()){
        std::cout << "\nAucune queue de poisson à signaler sur l'autoroute de l'amour..." << std::endl;
    }
    for(int i = 0; i < seaweedSize; i++) {
        if (this->seaweeds[i].getHp() >= 10) {
            this->seaweeds[i].setHp(this->seaweeds[i].getHp() / 2);
            Seaweed s = Seaweed(this->seaweeds[i].getHp(), 0);
            this->seaweeds.push_back(s);
            std::cout << "L'algue " << i << " étant maintenant mature. Elle laisse de la place à une petite nouvelle." << std::endl;
        }
    }
    if(seaweedSize == this->seaweeds.size()){
        std::cout << "Pas de nouvelles algues cette nuit." << std::endl;
    }
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


void Aquarium::overage() {
    int i;
    for (i= 0; i < this->fishs.size(); i++) {
        if(this->fishs[i].getTurn() >= 20 && this->fishs[i].getHp() > 0){
            this->fishs[i].setHp(0);
            std::cout << "Le poisson " << this->fishs[i].getName() << " est mort de vieillesse... cheh." << std::endl;
        } else {
            this->fishs[i].setTurn(this->fishs[i].getTurn()+1);
        }
    }

    for (i= 0; i < this->seaweeds.size(); i++) {
        if(this->seaweeds[i].getTurn() >= 20 && this->seaweeds[i].getHp() > 0){
            this->seaweeds[i].setHp(0);
            std::cout << "L'algue " << i << " est morte de vieillesse." << std::endl;
        } else {
            this->seaweeds[i].setTurn(this->seaweeds[i].getTurn()+1);
        }
    }
}


void Aquarium::growthSeaweed() {
    for (int i = 0; i < this->seaweeds.size(); ++i) {
        if(seaweeds[i].getHp() > 0) {
            seaweeds[i].setHp(seaweeds[i].getHp()+1);
        }
    }
}


void Aquarium::setStateInFile() {

    int i;
    std::string actualTurn = std::to_string(getTurn());
    std::ofstream myfile ("aquarium_"+actualTurn+".poisson");
    if (myfile.is_open())
    {
        myfile << "Turn : " << actualTurn << "\n" ;
        myfile << "Fishs : \n";
        for (i = 0; i < this->fishs.size(); i++) {
            myfile <<"\t" << "[" << i << "] : " << this->fishs[i] << "\n";
        }
        myfile << "\nSeaweeds : \n";
        for(i = 0; i < this->seaweeds.size(); i++){
            myfile <<"\t" << "[" << i << "] : " << this->seaweeds[i] << "\n";
        }
        myfile.close();
    }
    else std::cout << "Unable to open file";
}



void Aquarium::passTime(bool saveInFile) {

    if(saveInFile)
        setStateInFile();

    changeGender();
    bouji();
    eatFish();
    growthSeaweed();

    sweeper(); //todo
    overage();

    this->turn+=1;
    int i;
    std::cout << "\nFishs :" << std::endl;
    for(i = 0; i < this->fishs.size(); i++)
        std::cout << "Name : " << this->fishs[i].getName() << " / Hp : " << this->fishs[i].getHp() << std::endl;

    std::cout << "\nQuantity of seaweeds : " << this->seaweeds.size()<< "\n" << std::endl;
}

