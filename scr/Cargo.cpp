#include "Cargo.h"


//operatorts

//constructors
Cargo::Cargo()
:name_("Trash"),amount_(1),basicPrice_(0){}

Cargo::Cargo(std::string n,int a,float bp,int cs)
:name_(n),amount_{a},basicPrice_(bp),cargoWeight_(cs){}

