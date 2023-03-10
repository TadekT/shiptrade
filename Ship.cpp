#include "ship.h"
   

//operator
// consturctors

Ship::Ship(): id_(-1){};

Ship::Ship(std::string name
,int id
,size_t maxCrew
,size_t capacity
,size_t speed
,size_t crew)
    :name_(name)
    ,id_(id)
    ,maxCrew_(maxCrew)
    ,capacity_(capacity)
    ,speed_(speed)
    ,crew_(crew)
    {};

    /// functions setters  
void Ship::setName(std::string& n){
    name_= n;
    std::cout<<"you change name to : " << n ;
    }

    // functions getters
std::string Ship::getName(){
    return name_;
    }