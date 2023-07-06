#ifndef CARGO_H
#define CARGO_H
#include <string>

class Cargo
{
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
    Cargo(std::string n,int a,float bp,int cs);

private:
    std::string name_;
    int amount_;
    float basicPrice_;
    int cargoWeight_;
};

#endif //CARGO_H