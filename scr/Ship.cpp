#include "../Heders/Ship.h"
#include "../Heders/Cargo.h"

Ship &Ship::operator+=(const int cw)
{
    if (cw > maxCrew_ && cw < 0)
    {
        std::cout << " Now way, Inccorect number";
    }

    crew_ += cw;
    return *this;
}
Ship &Ship::operator-=(const int cw)
{
    if (cw > maxCrew_ && cw < 0)
    {
        std::cout << " Now way, Inccorect number";
    }

    crew_ -= cw;
    return *this;
}
///////////////////////////////////////////////////////

// consturctors

Ship::Ship(){};

Ship::Ship(std::string name, int id, int maxCrew, size_t capacity, size_t speed, size_t crew)
    : name_(name), id_(id), maxCrew_(maxCrew), capacity_(capacity), speed_(speed), crew_(crew){};


Ship::Ship(int id, int maxCrew, size_t speed)
    : Ship("Boat", id, maxCrew, 50, speed, 10){};

////////////////////////////////////////////////

/// functions setters

std::string Ship::setName(std::string &n)
{
    name_ = n;
    std::cout << "you change name to : " << n;
    return name_;
}
//////////////////////////////////////

// functions getters

std::string Ship::getName()
{
    return name_;
}

const int Ship::getId(){return id_;};
int Ship::getMaxCrew(){return maxCrew_;};
size_t Ship::getCapacity(){return capacity_;};
size_t Ship::getSpeed(){return speed_;};
size_t Ship::getCrew(){return crew_;}
void Ship::getAllInfo()
{
    std::cout << "Name : " << name_ << "\n"
              << "ID : " << id_ << "\n"
              << "Max Crew : " << maxCrew_ << "\n"
              << "Capacity : " << capacity_ << "\n"
              << "Speed : " << speed_ << "\n"
              << "Crew : " << crew_ << "\n\n";
}

///////////////////////////////////