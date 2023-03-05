#include "Ship.h"
   
   
    Ship::Ship(): id_(-1){};
    Ship::Ship(std::string name, int id, size_t maxCrew, size_t capacity, size_t speed)
    :name_(name),id_(id),maxCrew_(maxCrew),capacity_(capacity),speed_(speed){};

    /// functions setters  
    void Ship::setName(std::string n){name_=n;}

    // functions getters
    std::string Ship::getName(){return name_;}