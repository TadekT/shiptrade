#include <vector>
#include <iostream>
#include <string>
#include "Heders/Ship.h"
#include "Heders/Cargo.h"

int main(){

    Ship neo_("Neo",7,20,50,10,20);

    neo_.getAllInfo();

    neo_ += 10;
    neo_.getAllInfo();
    neo_ -= 30;
    neo_.getAllInfo();
    return 0;
}
