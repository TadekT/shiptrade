#include <vector>
#include <iostream>
#include <string>
#include "Ship.h"
#include "Cargo.h"

int main(){

    Ship neo_("Neo",07,20,50,10,20);
    Ship br_;
    neo_.getAllInfo();
    br_.getAllInfo();
    Cargo trash_;
    Cargo steel_("Steel", 10, 5, 1);
    neo_.buyCargo(steel_);
    neo_.buyCargo(trash_);
    neo_.displayStorage();
    //neo_ += 10;
    //neo_.getAllInfo();
    //neo_ -= 30;
    //neo_.getAllInfo();
    return 0;
}
