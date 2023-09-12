#include "../Heders/Cargo.h"
//getters

    std::string const Cargo::getName(){return name_;};
    int const Cargo::getAmount(){return amount_;};
    float const Cargo::getBasicPrice(){return basicPrice_;};
    int const Cargo::getCargoWeight(){return cargoWeight_;};

//operatorts

//constructors
    Cargo::Cargo()
        :name_("Trash"),
        amount_(1),
        basicPrice_(0),
        cargoWeight_(1){};
    
    Cargo::Cargo(std::string name, int amount, float basicPrice, int cargoWeight)
        :name_(name),
         amount_{amount},
         basicPrice_(basicPrice),
         cargoWeight_(cargoWeight){};


