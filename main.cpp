#include <vector>
#include <iostream>
#include <string>
#include "Ship.h"

int main(){

    Ship neo_("Neo",07,20,50,10);

    std::cout<<neo_.getName(); 

    return 0;
}