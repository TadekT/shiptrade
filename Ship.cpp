#include "Ship.h"
   

//operators
    Ship& Ship::operator+=(int addCrew){
        crew_+=addCrew;
        std::cout<<"You get new Crew in ammount : "
                 << addCrew <<std::endl;
        return *this;
    };
    Ship& Ship::operator-=(int subCrew){
        crew_-=subCrew;
        std::cout<<"You have remove a crew in amount : "
                 << subCrew <<std::endl;
        return *this;
    };
// consturctors

Ship::Ship(): id_(-1){};

Ship::Ship(std::string name, int id, size_t maxCrew, size_t capacity, size_t speed)
    :name_(name),id_(id),maxCrew_(maxCrew),capacity_(capacity),speed_(speed){};

    /// functions setters  
void Ship::setName(std::string n){name_=n;}

    // functions getters
std::string Ship::getName(){return name_;}