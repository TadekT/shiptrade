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
    Cargo(std::string n,size_t a,float bp);
};

#endif //CARGO_H