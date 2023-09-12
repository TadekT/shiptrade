#ifndef CARGO_H
#define CARGO_H
#include <string>

class Cargo
{
private:
    std::string name_;
    int amount_;
    float basicPrice_;
    int cargoWeight_;

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

#endif //CARGO_H