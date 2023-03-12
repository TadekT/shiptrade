#include "ship.h"
   

//operator
Ship& Ship::operator+=(const int cw){
    if(cw > maxCrew_ && cw < 0){
        std::cout<< " Now way, Inccorect number";
        }

    crew_ += cw;
    return *this;
}
Ship& Ship::operator-=(const int cw){
    if(cw > maxCrew_ && cw < 0){
        std::cout<< " Now way, Inccorect number";
        }

    crew_ -= cw;
    return *this;
}
// consturctors

Ship::Ship(): id_(-1){};

Ship::Ship(std::string name
,int id
,int maxCrew
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

Ship::Ship(int id,
int maxCrew,
size_t speed)
:Ship("Boat",id,maxCrew,50,speed,10){};

    /// functions setters  
void Ship::setName(std::string& n){
    name_= n;
    std::cout<<"you change name to : " << n ;
    }

    // functions getters
std::string Ship::getName(){
    return name_;
    }