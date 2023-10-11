#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <memory>
#include "../Heders/Cargo.h"
class Ship{
private:

    std::vector<Cargo> storage{};
    std::string name_{""};
    int id_{0};
    int maxCrew_{0};
    size_t capacity_{0};
    size_t speed_{0};
    size_t crew_{0};
 
public:
    //vector "Storage" methods  
    void displayStorage();
    void buyCargo(Cargo& cargo);
    //operator
        Ship& operator+=(const int);
        Ship& operator-=(const int);
    
    //constructors    
        Ship();
        Ship(std::string name, int id, int maxCrew, size_t capacity, size_t speed,size_t crew);
        Ship(int ,int ,size_t);
    

    /// functions setters  
        std::string setName(std::string& n);

    // functions getters
  
        std::string getName();
        const int getId();
        int getMaxCrew();
        size_t getCapacity();
        size_t getSpeed();
        size_t getCrew();
        void getAllInfo();

};

