#include <vector>
#include <iostream>
#include <string>
#include "Ship.h"

int main(){

    Ship neo_("Neo",07,20,50,10,20);

    neo_.getAllInfo();

    neo_ += 10;
    neo_.getAllInfo();
    neo_ -= 30;
    neo_.getAllInfo();
    return 0;
}
