#include <vector>
#include <iostream>
#include <string>
#include "ship.h" 
#include "Cargo.h"

int main(){

    Ship neo_("Neo",07,20,50,10,10);

    std::cout<<neo_.getName(); 

    return 0;
}