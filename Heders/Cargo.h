#pragma once
#include <string>

class Cargo
{
private:
    std::string name_{"Trash"};
    int amount_{1};
    float basicPrice_{0.f};
    int cargoWeight_{1};
public:
    std::string const getName();
    int const getAmount();
    float const getBasicPrice();
    int const getCargoWeight();
//operator 
   // Cargo& operator+=(const int addingAmount);
  //  Cargo& operator-=(const int subtractingAmount);


//constructors 
    Cargo();
    Cargo(std::string name,int amount,float basicPrice,int cargoWeight);
    

};

