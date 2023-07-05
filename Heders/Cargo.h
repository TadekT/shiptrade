#ifndef CARGO_H
#define CARGO_H
#include <string>

class Cargo
{
public:

//operator 
    Cargo& operator+=(const int);

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