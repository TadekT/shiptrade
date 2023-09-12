#ifndef	STORAGE_H
#define	STORAGE_H
#include<string>
#include<vector>
#include"Cargo.h"

class Storage {
	std::string name_;
	int capacity_;
	std::vector<Cargo&> cargoStorage{};

public:
	Storage(){};
	std::string getName();
	int getCapacity();
	void getCargolist();
	void addCargo(Cargo& obj);
	//void rmCargo(Cargo& obj);

};

#endif STORAGE_H
