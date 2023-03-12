
#ifndef SHIP_H
#define SHIP_H
#include <vector>

#include <iostream>
#include <string>

class Ship{
    private:
    std::string name_;
    int id_;
    int maxCrew_;
    size_t capacity_;
    size_t speed_;
    size_t crew_;
    
    public:
    //operators
    Ship& operator+=(const int);
    Ship& operator-=(const int);
    //constructors    
    Ship();
    Ship(std::string name
    ,int id
    ,int maxCrew_
    ,size_t capacity
    ,size_t speed
    ,size_t crew);
    Ship(int id, int maxCrew_,size_t speed);
    /// functions setters  
    void setName(std::string& n);
    

    // functions getters
    std::string getName();
};

#endif //SHIP_H