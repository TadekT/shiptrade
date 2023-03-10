#include "Cargo.h"
#include "Ship.h"

//constructors
Cargo::Cargo()
:name_("Trash"),amount_(1),basicPrice_(0){}

Cargo::Cargo(std::string n,size_t a,float bp)
:name_(n),amount_{a},basicPrice_(bp){}



/*
Wymyślić / Rozrysować zarys projektu
-Sprawdzić czy da sie pobrać obiekty puliczne z klasy Ship.h
-Dopisać konsturktory do klasy Ship.cpp /Ship.h
-Stworzyć klase "ShipStorage" który ma określoną liczbe miejsć
i przyjmuje towar
- Towar musi zajmować określoną liczbe miejsca w ShipStorage

*/