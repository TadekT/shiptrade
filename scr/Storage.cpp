#include "../Heders/Storage.h"


std::string Storage::getName() { return name_; };
int Storage::getCapacity() { return capacity_; };

void Storage::addCargo(Cargo& obj) {

	cargoStorage.push_back(obj);
};


//void Storage::rmCargo(Cargo& obj) {};
