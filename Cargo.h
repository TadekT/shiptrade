#ifndef CARGO_H
#define CARGO_H
#include <string>

class Cargo
{
private:
    std::string name_;
    size_t amount_;
    float basicPrice_;
public:
    Cargo();
    Cargo(std::string name,size_t amount, float basicPrice);
    Cargo& operator+=(const size_t);
    Cargo& operator-=(const size_t);
};

#endif