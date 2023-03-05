
#ifndef SHIP_H
#define SHIP_H
#include <vector>

#include <iostream>
#include <string>

class Ship{
    private:
    std::string name_;
    int id_;
    size_t maxCrew_;
    size_t capacity_;
    size_t speed_;
    size_t crew_;
    
    public:
    //constructors    
    Ship();
    Ship(std::string name, int id, size_t maxCrew, size_t capacity, size_t speed);

    /// functions setters  
    void setName(std::string n);

    // functions getters
    std::string getName();
};

#endif 